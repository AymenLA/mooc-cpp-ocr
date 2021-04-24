cmake_minimum_required (VERSION 2.6)

project (ocr_cpp_class_p1)

# The version number.
set (ocr_cpp_class_p1_VERSION_MAJOR 1)
set (ocr_cpp_class_p1_VERSION_MINOR 0)

# sources and headers dir for the main 

set(MAIN_SOURCE_DIR main/src)
set(MAIN_INCLUDE_DIR main/include)

# sources and headers dir for components component
set(C_PERSONNAGE_SOURCE_DIR  components/class_Personnage/src)
set(C_PERSONNAGE_INCLUDE_DIR components/class_Personnage/include)

set(C_ARME_SOURCE_DIR  components/class_Arme/src)
set(C_ARME_INCLUDE_DIR components/class_Arme/include)

# sources and headers dir for librairies

# the install dir
set(INSTALL_DIR ../build)

# additional includes
include_directories(${MAIN_INCLUDE_DIR}
                    ${C_PERSONNAGE_INCLUDE_DIR}
                    ${C_ARME_INCLUDE_DIR})

set(TARGET_SOURCES ${MAIN_SOURCE_DIR}/main.cpp
                   ${C_PERSONNAGE_SOURCE_DIR}/c_Personnage.cpp
                   ${C_ARME_SOURCE_DIR}/c_Arme.cpp)


set(HEADER_FILES ${MAIN_INCLUDE_DIR}/application_ecode.h
                 ${C_PERSONNAGE_INCLUDE_DIR}/c_Personnage.hpp
                 ${C_ARME_INCLUDE_DIR}/c_Arme.hpp)


set(CMAKE_BUILD_TYPE Debug)
add_definitions(-DDEBUG_LEVEL=1)
add_definitions(-DBUILD_APP)

add_executable(ocr_cpp_class_p1 ${TARGET_SOURCES} ${HEADER_FILES})
