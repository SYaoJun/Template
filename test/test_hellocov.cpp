
#include "test_lib.h"

#include "gtest/gtest.h"

int add(int a, int b) {
    return a + b;
}

TEST(AddFunctionTest, PositiveNumbers) {
    is_power_of_two(8);
    multiply_by_two(7);
    divide_by_two(-7);
    is_power_of_two(-8);
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(-1, 1), 0);
}
