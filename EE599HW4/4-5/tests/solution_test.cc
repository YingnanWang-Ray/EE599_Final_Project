#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Function0, Return0) {
  Solution solution ;
  std::vector<int> input;
  input = {5,9,3,1,7,11};
  solution.Sort(input);
  std::vector<int> expected = {1,3,5,7,9,11};
  EXPECT_EQ(expected, input);
}

TEST(Function1, Return1) {
  Solution solution ;
  std::vector<int> input;
  input = {-1,3,-5,7,-9};
  solution.Sort(input);
  std::vector<int> expected = {-9,-5,-1,3,7};
  EXPECT_EQ(expected, input);
}

TEST(Function2, Return2) {
  Solution solution ;
  std::vector<int> input;
  input = {0,1,0,1,0,1,0,1};
  solution.Sort(input);
  std::vector<int> expected = {0,0,0,0,1,1,1,1};
  EXPECT_EQ(expected, input);
}

