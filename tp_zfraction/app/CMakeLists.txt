cmake_minimum_required (VERSION 2.6)

project (ocr_cpp_tp_zfraction)

# The version number.
set (ocr_cpp_tp_zfraction_VERSION_MAJOR 1)
set (ocr_cpp_tp_zfraction_VERSION_MINOR 0)

# sources and headers dir for the main 

set(MAIN_SOURCE_DIR main/src)
set(MAIN_INCLUDE_DIR main/include)

# sources and headers dir for components component
set(COMPONENT_ZFRACTION_SOURCE_DIR components/class_ZFraction/src)
set(COMPONENT_ZFRACTION_INCLUDE_DIR components/class_ZFraction/include)

# sources and headers dir for librairies

# the install dir
set(INSTALL_DIR ../build)

# additional includes
include_directories(${MAIN_INCLUDE_DIR}
                    ${COMPONENT_ZFRACTION_INCLUDE_DIR})

set(TARGET_SOURCES ${MAIN_SOURCE_DIR}/main.cpp
                   ${COMPONENT_ZFRACTION_SOURCE_DIR}/class_ZFraction.cpp)


set(HEADER_FILES ${MAIN_INCLUDE_DIR}/application_ecode.h
                 ${COMPONENT_ZFRACTION_INCLUDE_DIR}/class_ZFraction.hpp)


set(CMAKE_BUILD_TYPE Debug)
add_definitions(-DDEBUG_LEVEL=1)
add_definitions(-DBUILD_APP)

add_executable(ocr_cpp_tp_zfraction ${TARGET_SOURCES} ${HEADER_FILES})
