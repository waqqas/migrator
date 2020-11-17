include(ExternalProject)

ExternalProject_Add(SemVer 
    URL https://github.com/Neargye/semver/releases/download/v0.2.2/semver.hpp
    DOWNLOAD_DIR ${CMAKE_INSTALL_PREFIX}/include/semver
    DOWNLOAD_NO_EXTRACT 1
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
)
