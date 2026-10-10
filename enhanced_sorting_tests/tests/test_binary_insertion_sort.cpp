#include <gtest/gtest.h>
#include <vector>

#include "binary_insertion_sort.h"

TEST(BinaryInsertionSortTests, SimpleSort)
{
    std::vector<int> arr = {5, 3, 1, 4};
    binary_insertion_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 3, 4, 5}));
}

TEST(BinaryInsertionSortTests, EmptyArray)
{
    std::vector<int> arr;
    binary_insertion_sort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(BinaryInsertionSortTests, OneElement)
{
    std::vector<int> arr = {7};
    binary_insertion_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{7}));
}

TEST(BinaryInsertionSortTests, Variant18)
{
    std::vector<int> arr = {20, 11, 7, 4, 17, 2, 13, 0};
    binary_insertion_sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{0, 2, 4, 7, 11, 13, 17, 20}));
}

TEST(BinaryInsertionSortTests, WorksWithDouble)
{
    std::vector<double> arr = {2.5, -1.0, 3.25, 0.0};
    binary_insertion_sort(arr);
    EXPECT_EQ(arr, (std::vector<double>{-1.0, 0.0, 2.5, 3.25}));
}
