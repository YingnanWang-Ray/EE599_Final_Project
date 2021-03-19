#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Function0, Return0) {
  std::map<int, std::set<int>> vertices{
      {7,{6,5}},
      {6,{4,3}},
      {5,{4,2}},
      {4,{}},
      {3,{1}},
      {2,{1}},
      {1,{0}},
      {0,{}}
  };
  Graph g(vertices);

  std::set<int> expected_root = {7};
  int root;
  for(auto i:g.findroot()){
    root = i;
  }

  std::vector<int> result_topo = {7,6,3,5,4,2,1,0};
  EXPECT_EQ(expected_root, g.findroot());  
  EXPECT_EQ(result_topo, g.TopologicalSort(root));
}

TEST(Function1, Return1) {
  std::map<int, std::set<int>> vertices{
    {0,{1,2,5}},
    {1,{2,3}},
    {2,{3}},
    {3,{4,6}},
    {4,{}},
    {5,{}},
    {6,{}}
  };
  Graph g(vertices);

  std::set<int> expected_root = {0};
  int root;
  for(auto i:g.findroot()){
    root = i;
  }

  std::vector<int> result_topo = {0, 5, 1, 2, 3, 6, 4};
  EXPECT_EQ(expected_root, g.findroot());  
  EXPECT_EQ(result_topo, g.TopologicalSort(root));
}

TEST(Function2, Return2) {
  std::map<int, std::set<int>> vertices{
    {0,{1,2,5}},
    {1,{2,3}},
    {2,{7}},
    {7,{3}},
    {3,{4,6}},
    {4,{}},
    {5,{8}},
    {6,{}},
    {8,{}}
  };
  Graph g(vertices);

  std::set<int> expected_root = {0};
  int root;
  for(auto i:g.findroot()){
    root = i;
  }

  std::vector<int> result_topo = {0, 5, 8, 1, 2, 7, 3, 6, 4};
  EXPECT_EQ(expected_root, g.findroot());  
  EXPECT_EQ(result_topo, g.TopologicalSort(root));
}