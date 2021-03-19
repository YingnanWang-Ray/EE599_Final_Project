#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
using namespace std;

TEST(Function0, Return0) {
  vector<int> input = {3,1,6,4,7,8,10,14,13};
  BST bst(input);
  int target = 14;
  
  EXPECT_EQ(true, bst.find(target));
  EXPECT_EQ(true, bst.erase(target));  
  EXPECT_EQ(false, bst.find(target));  
}//Only has one left child node

TEST(Function1, Return1) {
  vector<int> input = {3,1,6,4,7,8,10,14,13};
  BST bst(input);
  int target = 10;
  
  EXPECT_EQ(true, bst.find(target));
  EXPECT_EQ(true, bst.erase(target));  
  EXPECT_EQ(false, bst.find(target));  
}//Only has one right child node

TEST(Function2, Return2) {
  vector<int> input = {3,1,6,4,7,8,10,14,13};
  BST bst(input);
  int target = 1;
  
  EXPECT_EQ(true, bst.find(target));
  EXPECT_EQ(true, bst.erase(target));  
  EXPECT_EQ(false, bst.find(target));  
}//Has no child node

TEST(Function3, Return3) {
  vector<int> input = {3,1,6,4,7,8,10,14,13};
  BST bst(input);
  int target = 8;
  
  EXPECT_EQ(true, bst.find(target));
  EXPECT_EQ(true, bst.erase(target));  
  EXPECT_EQ(false, bst.find(target));  
}//Has two child node & root

TEST(Function4, Return4) {
  vector<int> input = {3,1,6,4,7,8,10,14,13};
  BST bst(input);
  int target = 6;
  
  EXPECT_EQ(true, bst.find(target));
  EXPECT_EQ(true, bst.erase(target));  
  EXPECT_EQ(false, bst.find(target));  
}//Has two child node & not root