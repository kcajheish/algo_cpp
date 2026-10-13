#include "gtest/gtest.h"
#include "libs/add.h"
#include <iterator>

TEST(TEST, add) {
    int data[2][2] = {
        {1, 2},
        {3, 4},
    };
    int result[] = {3, 7};
    int rows = std::size(data);
    for (int i = 0; i < rows; i++) {
        auto input = data[i];
        EXPECT_EQ(add(input[0], input[1]), result[i]);
    }
}