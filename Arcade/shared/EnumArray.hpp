///////////////////////////////////////////////////////////////////////////////
// Header guard
///////////////////////////////////////////////////////////////////////////////
#pragma once

///////////////////////////////////////////////////////////////////////////////
// Dependencies
///////////////////////////////////////////////////////////////////////////////
#include <array>
#include <type_traits>
#include <cassert>
#include <cstddef>

///////////////////////////////////////////////////////////////////////////////
// Namespace Arc::priv
///////////////////////////////////////////////////////////////////////////////
namespace Arc::priv
{

///////////////////////////////////////////////////////////////////////////////
/// \brief
///
///////////////////////////////////////////////////////////////////////////////
template <typename Enum, typename Value, std::size_t Count>
struct EnumArray : public std::array<Value, Count>
{
    ///////////////////////////////////////////////////////////////////////////
    //
    ///////////////////////////////////////////////////////////////////////////
    static_assert(
        std::is_enum_v<Enum>,
        "Enum type parameter must be an enumeration"
    );

    ///////////////////////////////////////////////////////////////////////////
    /// \brief
    ///
    /// \param key
    ///
    /// \return
    ///
    ///////////////////////////////////////////////////////////////////////////
    constexpr Value& operator[](Enum key)
    {
        const auto index = static_cast<std::size_t>(key);
        assert(index < Count && "Index is out of bounds");
        return (std::array<Value, Count>::operator[](index));
    }

    ///////////////////////////////////////////////////////////////////////////
    /// \brief
    ///
    /// \param key
    ///
    /// \return
    ///
    ///////////////////////////////////////////////////////////////////////////
    constexpr const Value& operator[](Enum key) const
    {
        const auto index = static_cast<std::size_t>(key);
        assert(index < Count && "Index is out of bounds");
        return (std::array<Value, Count>::operator[](index));
    }
};

} // namespace Arc::priv
