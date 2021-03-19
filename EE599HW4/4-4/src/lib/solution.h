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
  std::vector<int> LevelOrder();
  TreeNode *root_;
private:
  void insert(TreeNode *&root,int v);

};

#endif