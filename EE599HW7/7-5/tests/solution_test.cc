#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Function0, Return0) {
  std::map<int, std::set<int>> vertices{
      {0,{1,4,5}},
      {1,{0,2,3}},
      {2,{1,3,8}},
      {3,{1,2}},
      {4,{0}},
      {5,{0,6}},
      {6,{5,8}},
      {7,{6,8}},
      {8,{2,6,7}}
  };
  Graph g(vertices);
  std::vector<bool> expected = {true, true, true, false, false, true, true, false, true};
  EXPECT_EQ(expected, g.PassI());  
}

TEST(Function1, Return1) {
  std::map<int, std::set<int>> vertices{
    {0,{1,2,5}},
    {1,{0,2,3}},
    {2,{0,1,3}},
    {3,{1,2,4,6}},
    {4,{3}},
    {5,{0}},
    {6,{3}}
  };
  Graph g(vertices);
  std::vector<bool> expected = {true, true, true, true, false, false, true};
  EXPECT_EQ(expected, g.PassI());  
}


TEST(Function2, Return2) {
  std::map<int, std::set<int>> vertices{
    {0,{1,2,5}},
    {1,{0,2,3}},
    {2,{0,1,7}},
    {7,{2,3}},
    {3,{1,7,4,6}},
    {4,{3}},
    {5,{0,8}},
    {6,{3}},
    {8,{5}}
  };
  Graph g(vertices);
  std::vector<bool> expected = {true, false, false, false, false, true, false, false, true};
  EXPECT_EQ(expected, g.PassI());  
}