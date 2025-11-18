find_package(Catch2 REQUIRED)
include(CTest)
include(Catch)
set(TEST_BINARY ${PROJECT_NAME}_test)
add_executable(${TEST_BINARY}
               test_tdd_fizzbuzz.cpp)
target_link_libraries(${TEST_BINARY} libfizzbuzz Catch2::Catch2)
catch_discover_tests(${TEST_BINARY})
