#include <gtest/gtest.h>
#include "prefix_sums.h"

TEST(NonNegPrefixSumTest, BasicCases) {
    EXPECT_TRUE(non_neg_prefix_sum({1, -1, 1, -1}));
    EXPECT_FALSE(non_neg_prefix_sum({1, -1, -1, 1}));
}

TEST(NonPosPrefixSumTest, BasicCases) {
    EXPECT_TRUE(non_pos_prefix_sum({-1, 1, -1, 1}));
    EXPECT_FALSE(non_pos_prefix_sum({1, -1, 1, -1}));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}