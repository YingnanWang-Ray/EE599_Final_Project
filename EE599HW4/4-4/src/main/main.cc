#include <iostream>
#include <vector>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    vector<int> input = {3,1,6,4,7,8,10,14,13};
    BST bst(input);
    vector<int> output;
    //BST bst;
    //bst.root_ = new TreeNode(8);
    //bst.root_->left = new TreeNode(3);
    //bst.root_->left->left = new TreeNode(1);
    //bst.root_->left->right = new TreeNode(6);
    //bst.root_->left->right->left = new TreeNode(4);
    //bst.root_->left->right->right = new TreeNode(7);
    //bst.root_->right = new TreeNode(10);
    //bst.root_->right->right = new TreeNode(14);
    //bst.root_->right->right->left = new TreeNode(13);
    output = bst.LevelOrder();
    for(auto i: output){
        cout<<i<<" ";
    }
    cout<<endl;
    return EXIT_SUCCESS;
}