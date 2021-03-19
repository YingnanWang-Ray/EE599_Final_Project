#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Function0, Return0) {
  Solution solution ;
  std::vector<int> input = {-2, -3,-1,-5,-6,-10};
  int k = 3;
  int expected = -3;
  EXPECT_EQ(expected, solution.Kth(input,k));
}

TEST(Function1, Return1) {
  Solution solution ;
  std::vector<int> input = {0,2,1,5,6,3};
  int k = 7;
  int expected = INT32_MIN;
  EXPECT_EQ(expected, solution.Kth(input,k));
}

TEST(Function2, Return2) {
  Solution solution ;
  std::vector<int> input = {5675,2,56522,14,444,-456,78};
  int k = 3;
  int expected = 444;
  EXPECT_EQ(expected, solution.Kth(input,k));
}

TEST(Function3, Return3) {
  Solution solution ;
  std::vector<int> input = {};
  int k = 2;
  int expected = INT32_MIN;
  EXPECT_EQ(expected, solution.Kth(input,k));
}