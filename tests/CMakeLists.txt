# Define data directory
SET(PYMESH_TEST_DATA_DIR ${PROJECT_SOURCE_DIR}/tests/data/)
ADD_DEFINITIONS(-DPYMESH_TEST_DATA_DIR="${PYMESH_TEST_DATA_DIR}")

# Add googletest googlemock support
ADD_SUBDIRECTORY(external/gmock-1.7.0)
SET(GTEST_BOTH_LIBRARIES gtest gmock)
INCLUDE_DIRECTORIES(${gmock_SOURCE_DIR})
INCLUDE_DIRECTORIES(${gmock_SOURCE_DIR}/include)
INCLUDE_DIRECTORIES(${gtest_SOURCE_DIR})
INCLUDE_DIRECTORIES(${gtest_SOURCE_DIR}/include)

# Add eigen wrapper
INCLUDE_DIRECTORIES(${EIGEN_WRAPPER_PATH})

# Add this directory
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(tools)
#ADD_SUBDIRECTORY(learning_tests)

# Bundle all tests into a single target
# make all_tests
ADD_CUSTOM_TARGET(all_tests DEPENDS tests tools_tests
    #learning_tests
    )

