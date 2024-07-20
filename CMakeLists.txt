cmake_minimum_required(VERSION 3.10)
project(SpotifyApiTest)

set(CMAKE_CXX_STANDARD 11)

find_package(CURL REQUIRED)

include_directories(include)
include_directories(${CURL_INCLUDE_DIR})
include_directories(/usr/include/jsoncpp)
include_directories(/usr/include/gtest)

add_executable(runTests
    src/main.cpp
    src/spotify_api.cpp
    tests/test_spotify_api.cpp
)

target_link_libraries(runTests
    ${CURL_LIBRARIES}
    jsoncpp
    gtest
    gtest_main
)
