///////////////////////////////////////////////////////////////////////////////
// Header guard
///////////////////////////////////////////////////////////////////////////////
#pragma once

///////////////////////////////////////////////////////////////////////////////
// Dependencies
///////////////////////////////////////////////////////////////////////////////
#include "Arcade/core/Library.hpp"
#include "Arcade/errors/DLError.hpp"
#include <dlfcn.h>
#include <iostream>
#include <unordered_map>
#include "Arcade/interfaces/IGameModule.hpp"
#include "Arcade/interfaces/IGraphicsModule.hpp"
#include <type_traits>

///////////////////////////////////////////////////////////////////////////////
// Namespace Arc
///////////////////////////////////////////////////////////////////////////////
namespace Arc
{

///////////////////////////////////////////////////////////////////////////////
// Static map to store handles
///////////////////////////////////////////////////////////////////////////////
static std::unordered_map<void*, void*> s_handles;

///////////////////////////////////////////////////////////////////////////////
template <typename T>
std::shared_ptr<T> Library::Load(const std::string& path)
{
    void* handle = dlopen(path.c_str(), RTLD_LAZY);
    if (!handle) {
        throw DLError(dlerror());
    }

    dlerror();

    using CreateFunction = std::unique_ptr<T> (*)();
    auto createFunc = reinterpret_cast<CreateFunction>(
        dlsym(handle, "CreateArcadeObject"));

    const char* dlsym_error = dlerror();
    if (dlsym_error) {
        throw DLError(dlerror());
    }

    std::unique_ptr<T> obj = createFunc();
    if (!obj) {
        throw DLError(dlerror());
    }

    T* raw_ptr = obj.get();

    std::shared_ptr<T> shared_obj(
        obj.release(),
        [handle, raw_ptr](T* ptr) {
            s_handles.erase(raw_ptr);
            delete ptr;
            dlclose(handle);
        }
    );

    s_handles[raw_ptr] = handle;

    return (shared_obj);
}

///////////////////////////////////////////////////////////////////////////////
template <typename T>
std::optional<std::string> Library::Is(const std::string& path)
{
    void* handle = dlopen(path.c_str(), RTLD_LAZY);

    if (!handle) {
        return (std::nullopt);
    }

    dlerror();

    std::string symbol = "NONE";

    if (std::is_base_of<IGameModule, T>::value) {
        symbol = "GetGameName";
    } else if (std::is_base_of<IGraphicsModule, T>::value) {
        symbol = "GetGraphicsName";
    } else {
        dlclose(handle);
        return (std::nullopt);
    }

    using GetNameFunction = std::string (*)();
    auto getName =
        reinterpret_cast<GetNameFunction>(dlsym(handle, symbol.c_str()));

    const char* dlsym_error = dlerror();
    if (dlsym_error) {
        dlclose(handle);
        return (std::nullopt);
    }

    std::string name = getName();

    dlclose(handle);
    return (name);
}

///////////////////////////////////////////////////////////////////////////////
template <typename T>
void Library::Unload(std::shared_ptr<T>& object)
{
    object.reset();
}

} // namespace Arc
