#include <gtest/gtest.h>
#include <vector>

#include "shaker_sort.h"

TEST(ShakerSortTests, SimpleSort)
{
    std::vector<int> arr = {5, 3, 1, 4};
    shaker_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 3, 4, 5}));
}

TEST(ShakerSortTests, ReverseArray)
{
    std::vector<int> arr = {5, 4, 3, 2, 1};
    shaker_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(ShakerSortTests, AlreadySorted)
{
    std::vector<int> arr = {1, 2, 3, 4};
    shaker_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4}));
}

TEST(ShakerSortTests, Variant18)
{
    std::vector<int> arr = {20, 11, 7, 4, 17, 2, 13, 0};
    shaker_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{0, 2, 4, 7, 11, 13, 17, 20}));
}

TEST(ShakerSortTests, EmptyAndOneElementAndDouble)
{
    std::vector<int> empty;
    shaker_sort(empty);
    EXPECT_TRUE(empty.empty());

    std::vector<int> one = {7};
    shaker_sort(one);
    EXPECT_EQ(one, (std::vector<int>{7}));

    std::vector<double> d = {2.5, -1.0, 3.25, 0.0};
    shaker_sort(d);
    EXPECT_EQ(d, (std::vector<double>{-1.0, 0.0, 2.5, 3.25}));
}
