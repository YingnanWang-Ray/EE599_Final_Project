#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Find0, Return0) {
  Solution solution;
  
  int sum = 5;
  std::vector<int> input;
  std::vector<int> actual;
  input = {1,4,3,2};
  actual = solution.FindV(input,sum);
  std::vector<int> expected;
  expected = {0,1};

  EXPECT_EQ(expected, actual);
}

TEST(Find1, Return1) {
  Solution solution;
  
  int sum = 10;
  std::vector<int> input;
  std::vector<int> actual;
  input = {1,4,3,2};
  actual = solution.FindV(input,sum);
  std::vector<int> expected;
  expected = {};

  EXPECT_EQ(expected, actual);
}

TEST(Find2,Return2){
  Solution solution;
  
  int sum = 3;
  std::vector<int> input;
  std::vector<int> actual;
  input = {-1,4,3,2};
  actual = solution.FindV(input,sum);
  std::vector<int> expected;
  expected = {0,1};

  EXPECT_EQ(expected, actual);
}

TEST(Find3,Return3){
  Solution solution;
  
  int sum = 6;
  std::vector<int> input;
  std::vector<int> actual;
  input = {1,2,3,3,6};
  actual = solution.FindV(input,sum);
  std::vector<int> expected;
  expected = {2,3};

  EXPECT_EQ(expected, actual);
}