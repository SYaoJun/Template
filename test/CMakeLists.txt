
find_package(GTest REQUIRED)

add_executable(test_hellocov test_hellocov.cpp)
target_link_libraries(test_hellocov PRIVATE test_lib GTest::gtest GTest::gtest_main)

add_test(
        NAME test_hellocov
        WORKING_DIRECTORY ./
        COMMAND test_hellocov
)