#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Function0, Return0) {
  std::vector<int> input = {0,1,2,3,4,5,6,7,8};
  MaxHeap maxheap(input);
  int test = 3;

  EXPECT_EQ(1, maxheap.GetParentIndex(test));
  EXPECT_EQ(7, maxheap.GetLeftIndex(test));
  EXPECT_EQ(8, maxheap.GetRightIndex(test));
  EXPECT_EQ(7, maxheap.GetLargestChildIndex(test));
  EXPECT_EQ(8, maxheap.top());

  maxheap.pop();
  std::vector<int> expected0 = {7,4,6,3,0,5,2,1};
  EXPECT_EQ(expected0, maxheap.data_);

  maxheap.push(9);
  std::vector<int> expected1 = {9,7,6,4,0,5,2,1,3};
  EXPECT_EQ(expected1, maxheap.data_);
}

TEST(Function1, Return1) {
  std::vector<int> input = {0,1,2,3,4,5,6,7,8};
  MaxHeap maxheap(input);
  int test = 7;

  EXPECT_EQ(3, maxheap.GetParentIndex(test));
  EXPECT_EQ(INT32_MIN, maxheap.GetLeftIndex(test));
  EXPECT_EQ(INT32_MIN, maxheap.GetRightIndex(test));
  EXPECT_EQ(INT32_MIN, maxheap.GetLargestChildIndex(test));
  EXPECT_EQ(8, maxheap.top());

  maxheap.pop();
  std::vector<int> expected0 = {7,4,6,3,0,5,2,1};
  EXPECT_EQ(expected0, maxheap.data_);

  maxheap.push(-1);
  std::vector<int> expected1 = {7,4,6,3,0,5,2,1,-1};
  EXPECT_EQ(expected1, maxheap.data_);
}

TEST(Function2, Return2) {
  std::vector<int> input = {0,-1,2,-3,4,-5,6,-7,8};
  MaxHeap maxheap(input);
  int test = 1;

  EXPECT_EQ(0, maxheap.GetParentIndex(test));
  EXPECT_EQ(3, maxheap.GetLeftIndex(test));
  EXPECT_EQ(4, maxheap.GetRightIndex(test));
  EXPECT_EQ(4, maxheap.GetLargestChildIndex(test));
  EXPECT_EQ(8, maxheap.top());

  maxheap.pop();
  std::vector<int> expected0 = {6,4,2,-1,0,-5,-3,-7};
  EXPECT_EQ(expected0, maxheap.data_);

  maxheap.push(1);
  std::vector<int> expected1 = {6,4,2,1,0,-5,-3,-7,-1};
  EXPECT_EQ(expected1, maxheap.data_);
}