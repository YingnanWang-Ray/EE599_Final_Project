#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Function0, Return0) {
  std::map<int, std::set<int>> vertices{
      {0,{1}},
      {1,{2,3}},
      {2,{0}},
      {3,{2,4,6}},
      {4,{NULL}},
      {5,{6}},
      {6,{NULL}}
  };
  Graph g(vertices);
  g.DFS_ALL();
  std::vector<int> expected = {0,1,3,2,4,6,5};
  EXPECT_EQ(expected, g.result);  
}

TEST(Function1, Return1) {
  std::map<int, std::set<int>> vertices{
    {0,{1}},
    {1,{3}},
    {2,{4}},
    {3,{4,6}},
    {4,{NULL}},
    {5,{6}},
    {6,{NULL}}
  };
  Graph g(vertices);
  g.DFS_ALL();
  std::vector<int> expected = {0,1,3,4,6,2,5};
  EXPECT_EQ(expected, g.result);  
}

TEST(Function2, Return2) {
  std::map<int, std::set<int>> vertices{
    {0,{1}},
    {1,{2,3}},
    {2,{0}},
    {3,{2,4,6}},
    {4,{NULL}},
    {5,{6}},
    {6,{NULL}},
    {7,{8}},
    {8,{NULL}}
  };
  Graph g(vertices);
  g.DFS_ALL();
  std::vector<int> expected = {0,1,3,2,4,6,5,7,8};
  EXPECT_EQ(expected, g.result);  
}

