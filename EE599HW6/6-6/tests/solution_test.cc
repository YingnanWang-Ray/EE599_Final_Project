#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Function0, Return0) {
  Solution solution;
  std::vector<int> input = {9,7,5,11,12,2,14,3,10,6};
  std::vector<int> result;
  result = solution.rearrange(input,9);
  std::vector<int> excepted = {5,2,3,6,9,7,11,12,14,10};
  EXPECT_EQ(result,excepted);  
}

TEST(Function1, Return1) {
  Solution solution;
  std::vector<int> input = {9,7,5,11,12,2,14,3,10,6};
  std::vector<int> result;
  result = solution.rearrange(input,8);
  std::vector<int> excepted = {9,7,5,2,3,6,10,11,12,14};
  EXPECT_EQ(result,excepted);  
}

TEST(Function2, Return2) {
  Solution solution;
  std::vector<int> input = {9,7,5,11,12,2,14,3,10,6};
  std::vector<int> result;
  result = solution.rearrange(input,6);
  std::vector<int> excepted = {9,7,5,11,12,2,3,10,6,14};
  EXPECT_EQ(result,excepted);  
}
