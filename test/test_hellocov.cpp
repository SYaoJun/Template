
#include "test_lib.h"

#include "gtest/gtest.h"


TEST(AddFunctionTest, PositiveNumbers) {
    is_power_of_two(8);
    multiply_by_two(7);
    divide_by_two(-7);
    is_power_of_two(-8);
}
