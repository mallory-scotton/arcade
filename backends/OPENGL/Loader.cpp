///////////////////////////////////////////////////////////////////////////////
// Dependencies
///////////////////////////////////////////////////////////////////////////////
#include "backends/OPENGL/OPENGLModule.hpp"
#include <memory>

///////////////////////////////////////////////////////////////////////////////
// Extern C
///////////////////////////////////////////////////////////////////////////////
extern "C"
{

///////////////////////////////////////////////////////////////////////////////
std::unique_ptr<Arc::IGraphicsModule> CreateArcadeObject(void)
{
    return (std::make_unique<Arc::OPENGLModule>());
}

///////////////////////////////////////////////////////////////////////////////
std::string GetGraphicsName(void)
{
    return ("OPENGL");
}

}
