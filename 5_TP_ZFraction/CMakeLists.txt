cmake_minimum_required (VERSION 2.6)

project (ZFraction)

# The version number.
set (affi_VERSION_MAJOR 1)
set (affi_VERSION_MINOR 0)

# sources and headers dir for the main application
set(SOURCE_DIR src)
set(INCLUDE_DIR include)

# sources and headers dir for the test application - NOT USED
# set(TEST_DIR tests/test_storage)

# config file and header for the configuration - NOT USED
# set(CONFIG_DIR config)

# the install dir
set(INSTALL_DIR install/usr/local/bin)

# additional includes
include_directories(${INCLUDE_DIR} ${CONFIG_DIR})

# main file will be the master of the opration

set(TARGET_SOURCES ${SOURCE_DIR}/main.cpp ${SOURCE_DIR}/zfraction.cpp)
set(HEADER_FILES ${INCLUDE_DIR}/zfraction.hpp)

add_definitions(-DDEBUG_L1=1)
add_definitions(-DBUILD_APP)

#add_custom_target(tests)
add_executable(ZFraction ${TARGET_SOURCES} ${HEADER_FILES})
