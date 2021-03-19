#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H
#include <vector>

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};

class BST{
public:
  BST();
  BST(std::vector<int> initial_values);
  ~BST(){root_=nullptr;}

  void push(int key);
  bool find(int key);
  bool erase(int key);

  void insert(TreeNode *&root,int key);
  bool Search(TreeNode *root,int key);
  TreeNode* FindParent(TreeNode *fp, int key);
  TreeNode* FindRightend(TreeNode *fp);
  TreeNode *root_;
};

#endif