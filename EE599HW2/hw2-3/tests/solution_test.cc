#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Should, Return) {
  Solution solution;
  std::vector<int> rmdup;
  rmdup = {1,2,2,3,3,4};
  std::vector<int> rmdups;
  rmdups = {1,1,2,2,3,5,5,6,6};
  std::vector<int> expected1;
  expected1 = {1,2,3,4};
  std::vector<int> expected1s;
  expected1s = {1,2,3,5,6};

  std::vector<int> reverse;
  reverse = {1,3,5,7,9};
  std::vector<int> expected2;
  expected2 = {9,7,5,3,1};

  std::vector<int> even;
  even = {1,2,3,5,7,9};
  std::vector<int> expected3;
  expected3 = {2};

  std::vector<int> conc1;
  conc1 = {1,3,5,7,9};
  std::vector<int> conc2;
  conc2 = {2,3,4,5,6};
  std::vector<int>  expected4;
  expected4 = {1,3,5,7,9,2,3,4,5,6};

  std::vector<int> inte1;
  inte1 = {1,2,3,4};
  std::vector<int> inte2;
  inte2 = {3,4,5,6};
  std::vector<int> inte3;
  inte3 = {5,6,7,8};
  std::vector<int> expected5;
  expected5 = {3,4};
  std::vector<int> expected6;
  expected6 = {};
  

  solution.RMDup(rmdup);
  solution.RMDupS(rmdups);
  solution.Reverse(reverse);
  solution.Even(even);

  EXPECT_EQ(expected1, rmdup);
  EXPECT_EQ(expected1s, rmdups);

  EXPECT_EQ(expected2, reverse);

  EXPECT_EQ(expected3, even);

  EXPECT_EQ(expected4, solution.Concatenating(conc1,conc2)); 

  EXPECT_EQ(expected5, solution.Intersection(inte1,inte2));
  EXPECT_EQ(expected6, solution.Intersection(inte1,inte3));
  
}