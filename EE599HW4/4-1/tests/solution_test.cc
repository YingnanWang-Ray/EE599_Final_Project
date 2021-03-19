#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Function0, Return0) {
  Solution solution ;
  std::vector<int> input = {1,2,3,4,5,6,7,8};
  std::vector<int> expected0 = {2,4,6,8};
  std::vector<int> expected1 = {1,4,9,16,25,36,49,64};
  std::vector<int> output_Filter;
  std::vector<int> output_Map;
  output_Filter = solution.Filter(input);
  output_Map = solution.Map(input);

  int expected2 = 36;

  EXPECT_EQ(expected0, solution.Filter(input));
  EXPECT_EQ(expected1, solution.Map(input));
  EXPECT_EQ(expected2, solution.Sum(input));
}

TEST(Function1, Return1) {
  Solution solution ;
  std::vector<int> input = {1,3,5,7,9,11,13};
  std::vector<int> expected0 = {};
  std::vector<int> expected1 = {1,9,25,49,81,121,169};
  std::vector<int> output_Filter;
  std::vector<int> output_Map;
  output_Filter = solution.Filter(input);
  output_Map = solution.Map(input);

  int expected2 = 49;

  EXPECT_EQ(expected0, solution.Filter(input));
  EXPECT_EQ(expected1, solution.Map(input));
  EXPECT_EQ(expected2, solution.Sum(input));
}

TEST(Function2, Return2) {
  Solution solution ;
  std::vector<int> input = {-1,-2,-3,-4,-5,-6,-7,-8};
  std::vector<int> expected0 = {-2,-4,-6,-8};
  std::vector<int> expected1 = {1,4,9,16,25,36,49,64};
  std::vector<int> output_Filter;
  std::vector<int> output_Map;
  output_Filter = solution.Filter(input);
  output_Map = solution.Map(input);

  int expected2 = -36;

  EXPECT_EQ(expected0, solution.Filter(input));
  EXPECT_EQ(expected1, solution.Map(input));
  EXPECT_EQ(expected2, solution.Sum(input));
}

TEST(Function3, Return3) {
  Solution solution ;
  std::vector<int> input = {1,-1,2,-2,3,-3,4,-4};
  std::vector<int> expected0 = {2,-2,4,-4};
  std::vector<int> expected1 = {1,1,4,4,9,9,16,16};
  std::vector<int> output_Filter;
  std::vector<int> output_Map;
  output_Filter = solution.Filter(input);
  output_Map = solution.Map(input);

  int expected2 = 0;

  EXPECT_EQ(expected0, solution.Filter(input));
  EXPECT_EQ(expected1, solution.Map(input));
  EXPECT_EQ(expected2, solution.Sum(input));
}

