#include "solution.h"
#include <iostream>
#include <vector>
#include <queue>

BST::BST(){
    root_ = nullptr;
}

BST::BST(std::vector<int> initial_values){
    if(initial_values.size()==0){
        root_ = nullptr;
    }else{
        root_ = new TreeNode(initial_values[initial_values.size()/2+1]);
        for(auto i : initial_values){
            push(i);
    }
    }

}

void BST::insert(TreeNode *&root,int v){
    if (root == nullptr) {
        root = new TreeNode(v);
    } else if (v < root->val) {
        insert(root->left, v);
    } else if (v > root->val) {
        insert(root->right, v);
    }
}

void BST::push(int key){
    insert(root_, key);
}

std::vector<int> BST::LevelOrder(){
    std::queue<TreeNode*> q;
    std::vector<int> r;
    if(root_ != nullptr){
        q.push(root_);
    }
    while(q.empty() == false){
        //std::cout<<q.front()->val<<" ";
        r.push_back(q.front()->val);
        if(q.front()->left != nullptr){
            q.push(q.front()->left);
        }
        if(q.front()->right != nullptr){
            q.push(q.front()->right);
        }

        q.pop();
        
    }
    return r;
}

