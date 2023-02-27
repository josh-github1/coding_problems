#include <gtest/gtest.h>
#include <1791_WIP.cpp>

TEST(findCenterNodeTest), EqualTest) {
    int actual = 2;
    Solution sol1;
    std::vector<std::vector<int>> test = {{1, 2}, {2, 3}, {4, 2}};
    EXPECT_EQ(sol1.findCenter(test), actual);
}