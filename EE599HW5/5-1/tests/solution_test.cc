#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
using namespace std;

TEST(Function0, Return0) {
  vector<int> input = {};
  vector<int> output = {};
  BST bst(input);
  EXPECT_EQ(output, bst.InOrder());
  EXPECT_EQ(output, bst.InOrderR(bst.root_));  
  EXPECT_EQ(0, bst.MaxDepth(bst.root_));  
}

TEST(Function1, Return1) {
  vector<int> input = {3,1,6,4,7,8,10,14,13};
  vector<int> output = {1, 3, 4, 6, 7, 8, 10, 13, 14};
  BST bst(input);
  bst.Clean();
  EXPECT_EQ(output, bst.InOrder());
  EXPECT_EQ(output, bst.InOrderR(bst.root_));  
  EXPECT_EQ(4, bst.MaxDepth(bst.root_));  
}//Only has one left child node

TEST(Function2, Return2) {
  vector<int> input = {3,1,6,4,7,8,10,14,13,15};
  vector<int> output = {1, 3, 4, 6, 7, 8, 10, 13, 14, 15};
  BST bst(input);
  bst.Clean();
  EXPECT_EQ(output, bst.InOrder());
  EXPECT_EQ(output, bst.InOrderR(bst.root_));  
  EXPECT_EQ(5, bst.MaxDepth(bst.root_));  
}

