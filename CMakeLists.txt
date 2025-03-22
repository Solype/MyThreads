cmake_minimum_required(VERSION 3.12)

project(SolyThread LANGUAGES CXX)

add_library(SolyThread STATIC
    src/ConditionVariable.cpp
    src/ScopeLock.cpp
    src/Mutex.cpp
)

target_include_directories(SolyThread PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/template
)

target_compile_features(SolyThread PUBLIC cxx_std_17)

add_executable(test_SolyThread
    main.cpp
)

target_link_libraries(test_SolyThread PRIVATE SolyThread)
