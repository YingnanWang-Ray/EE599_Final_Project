#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
//In this function, we have to notice that what's the input like will effect the result.
//In order to run the example, I chose the input[size()/2+1] to be the root.
TEST(Function0, Return0) {
  std::vector<int> input = {3,1,6,4,7,8,10,14,13};
  BST bst(input);
  std::vector<int> expected = {8,3,10,1,6,14,4,7,13};
  EXPECT_EQ(expected, bst.LevelOrder());
}

TEST(Function1, Return1) {
  std::vector<int> input = {};
  BST bst(input);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, bst.LevelOrder());
}

TEST(Function2, Return2) {
  std::vector<int> input = {3,2,1,4,5};
  BST bst(input);
  std::vector<int> expected = {4, 3, 5, 2, 1};
  EXPECT_EQ(expected, bst.LevelOrder());
}