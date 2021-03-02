MESSAGE(STATUS "Using bundled Findlibgtest.cmake...")
FIND_PATH(
    LIBGTEST_INCLUDE_DIR
    gtest/gtest.h
    /usr/include
    /usr/local/include
    )
FIND_LIBRARY(
    LIBGTEST_LIBRARIES
    libgtest.a
    /usr/lib
    /usr/local/lib
    )
