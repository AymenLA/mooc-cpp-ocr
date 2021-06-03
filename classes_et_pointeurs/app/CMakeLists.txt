cmake_minimum_required (VERSION 2.6)

project (ocr_cpp_classe_et_pointeurs)

# The version number.
set (ocr_cpp_classe_et_pointeurs_VERSION_MAJOR 1)
set (ocr_cpp_classe_et_pointeurs_VERSION_MINOR 0)

# sources and headers dir for the main 
set(MAIN_SOURCE_DIR main/src)
set(MAIN_INCLUDE_DIR main/include)

# sources and headers dir for components component
set(COMPONENT_PERSONNAGE_SOURCE_DIR components/Personnage/src)
set(COMPONENT_PERSONNAGE_INCLUDE_DIR components/Personnage/include)

set(COMPONENT_ARME_SOURCE_DIR components/Arme/src)
set(COMPONENT_ARME_INCLUDE_DIR components/Arme/include)

# sources and headers dir for librairies

# the install dir
set(INSTALL_DIR ../build)

# additional includes
include_directories(${MAIN_INCLUDE_DIR}
                    ${COMPONENT_PERSONNAGE_INCLUDE_DIR}
                    ${COMPONENT_ARME_INCLUDE_DIR})

set(TARGET_SOURCES ${MAIN_SOURCE_DIR}/main.cpp
                   ${COMPONENT_PERSONNAGE_SOURCE_DIR}/class_Personnage.cpp
                   ${COMPONENT_ARME_SOURCE_DIR}/class_Arme.cpp)


set(HEADER_FILES ${MAIN_INCLUDE_DIR}/application_ecode.h
                 ${COMPONENT_PERSONNAGE_INCLUDE_DIR}/class_Personnage.hpp
                 ${COMPONENT_ARME_INCLUDE_DIR}/class_Arme.hpp)


set(CMAKE_BUILD_TYPE Debug)
add_definitions(-DDEBUG_LEVEL=1)
add_definitions(-DBUILD_APP)

add_executable(ocr_cpp_classe_et_pointeurs ${TARGET_SOURCES} ${HEADER_FILES})
