cmake_minimum_required (VERSION 2.6)

project (ssl_cipher)

# The version number.
set (ssl_cipher_VERSION_MAJOR 1)
set (ssl_cipher_VERSION_MINOR 0)

# sources and headers dir for the main 
set(MAIN_SOURCE_DIR application/main/src)
set(MAIN_INCLUDE_DIR application/main/include)
set(MAIN_DEFINITION_DIR application/main/definition)

# sources and headers dir for components cipher
set(COMPONENT_CIPHER_SOURCE_DIR components/cipher/src)
set(COMPONENT_CIPHER_INCLUDE_DIR components/cipher/include)
set(COMPONENT_CIPHER_DEFINITION_DIR components/cipher/definition)

# sources and headers dir for components input_logic
set(COMPONENT_INPUT_LOGIC_SOURCE_DIR components/input_logic/src)
set(COMPONENT_INPUT_LOGIC_INCLUDE_DIR components/input_logic/include)
set(COMPONENT_INPUT_LOGIC_DEFINITION_DIR components/input_logic/definition)

# sources and headers dir for components storage
set(COMPONENT_STORAGE_SOURCE_DIR components/storage/src)
set(COMPONENT_STORAGE_INCLUDE_DIR components/storage/include)
set(COMPONENT_STORAGE_DEFINITION_DIR components/storage/definition)

# sources and headers dir for librairies

# the install dir
set(INSTALL_DIR ../build)

# additional includes
include_directories(${MAIN_INCLUDE_DIR}
                    ${MAIN_DEFINITION_DIR}
                    ${COMPONENT_CIPHER_INCLUDE_DIR}
                    ${COMPONENT_CIPHER_DEFINITION_DIR}
                    ${COMPONENT_INPUT_LOGIC_INCLUDE_DIR}
                    ${COMPONENT_INPUT_LOGIC_DEFINITION_DIR}
                    ${COMPONENT_STORAGE_INCLUDE_DIR}
                    ${COMPONENT_STORAGE_DEFINITION_DIR})

set(TARGET_SOURCES ${MAIN_SOURCE_DIR}/main.cpp
                   ${COMPONENT_CIPHER_SOURCE_DIR}/class_Cipher.cpp
                   ${COMPONENT_INPUT_LOGIC_SOURCE_DIR}/class_InputLogic.cpp
                   ${COMPONENT_STORAGE_SOURCE_DIR}/class_Storage.cpp)


set(HEADER_FILES ${MAIN_INCLUDE_DIR}/application_ecode.hpp
                 ${COMPONENT_CIPHER_INCLUDE_DIR}/class_Cipher.hpp
                 ${COMPONENT_STORAGE_INCLUDE_DIR}/class_Storage.hpp
                 ${COMPONENT_INPUT_LOGIC_INCLUDE_DIR}/class_InputLogic.hpp)


set(CMAKE_BUILD_TYPE Debug)
add_definitions(-DDEBUG_LEVEL=1)
add_definitions(-DBUILD_APP)

add_executable(ssl_cipher ${TARGET_SOURCES} ${HEADER_FILES})