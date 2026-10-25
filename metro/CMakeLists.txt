cmake_minimum_required(VERSION 3.16)
project(metro)
enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
        CMAKE_CXX_COMPILER_ID STREQUAL "GNU")

    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

    if (UNIX)
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pedantic -fPIC")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -fPIC")
    endif ()

    if (APPLE)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
    else ()
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wl,--no-as-needed")
    endif ()
endif ()

if (CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING "Choose the type of build" FORCE)
endif ()

include(CheckIncludeFileCXX)
include(CheckIncludeFile)
include(CheckLibraryExists)
include(CMakeDetermineCCompiler)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_BINARY_DIR})

ADD_SUBDIRECTORY(src)

MESSAGE(STATUS "- - - -")
MESSAGE(STATUS "${PROJECT_NAME_COMPLETE} configured successfully")
MESSAGE(STATUS "Using ${CMAKE_INSTALL_PREFIX} for installation")
MESSAGE(STATUS "Build type ${CMAKE_BUILD_TYPE}")
IF (ARTIS_HAVE_GCC_ABI_DEMANGLE)
    MESSAGE(STATUS "Build with GCC ABI Demangle...: yes")
ENDIF (ARTIS_HAVE_GCC_ABI_DEMANGLE)
IF (ARTIS_HAVE_EXECINFO)
    MESSAGE(STATUS "Build with execinfo.h.........: yes")
ENDIF (ARTIS_HAVE_EXECINFO)
IF (Boost_FOUND)
    MESSAGE(STATUS "Build with boost..............: yes")
ENDIF (Boost_FOUND)
MESSAGE(STATUS "- - - -")
