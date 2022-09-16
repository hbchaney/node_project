cmake_minimum_required(VERSION 3.0.0)
project(gas_parser VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(gas_parser main.cpp)

add_subdirectory(lib) 
target_link_directories(${PROJECT_NAME} PRIVATE libs)
target_link_libraries(${PROJECT_NAME} PRIVATE type_utls)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
