#include "solution.h"
#include <iostream>
#include <vector>


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

void BST::insert(TreeNode *&root,int key){
    if (root == nullptr) {
        root = new TreeNode(key);
    } else if (key < root->val) {
        insert(root->left, key);
    } else if (key > root->val) {
        insert(root->right, key);
    }
}

void BST::push(int key){
    insert(root_, key);
}

bool BST::Search(TreeNode *root,int key){
    if(root == nullptr){
        return false;
    }
    if(root->val == key){
        return true;
    }else if(key < root->val){
        Search(root->left, key);
    }else if(key > root->val){
        Search(root->right, key);
    }
}

bool BST::find(int key){
    return Search(root_, key);
}

bool BST::erase(int key){
    TreeNode *temp0;
    TreeNode *root;
    TreeNode *empty = new TreeNode(0);
    if(root_ == nullptr){
        return false;
    }
    if (find(key) == true)
    {

        temp0 = FindParent(root_, key);
        if(temp0 == nullptr){
            std::cout<<"This is root"<<std::endl;
            std::cout<<"Two child"<<std::endl;
            root_ = root_->left;
            FindRightend(root_->left)->right = root_->right;
            return true; 
        }else if(temp0->left!=nullptr && temp0->left->val == key){
            root = temp0->left;
        }else if(temp0->right!=nullptr && temp0->right->val == key){
            root = temp0->right;
        }
        if(key == root->val){ 

            //this key has no child node
            if(root->left == nullptr && root->right == nullptr){
                std::cout<<"No child"<<std::endl;                
                if(temp0->left->val == key){
                    temp0->left = empty->left;
                    return true;
                }else{
                    temp0->right = empty->right;
                    return true;
                }
            }

            //this key has only one child
            else if(root->left == nullptr && root->right != nullptr){ 
                std::cout<<"One right child"<<std::endl;
                if(temp0->left!=nullptr && temp0->left->val == key){
                    temp0->left = root->right;
                    return true;
                }else if(temp0->right!=nullptr && temp0->right->val == key){
                    temp0->right = root->right;
                    return true;
                }
            }
            else if(root->left != nullptr && root->right == nullptr){
                std::cout<<"One left child"<<std::endl;
                if(temp0->left!=nullptr && temp0->left->val == key){
                    temp0->left = root->left;
                    return true;
                }else if(temp0->right!=nullptr && temp0->right->val == key){
                    temp0->right = root->left;
                    return true;
                }               
            }

            //this key has two child
            else {
                std::cout<<"Two child"<<std::endl;
                if(temp0->left->val == key){
                    temp0->left = root->left;
                    FindRightend(root->left)->right = root->right;
                    return true;
                }else{
                    temp0->right = root->left;
                    FindRightend(root->left)->right = root->right;
                    return true;
                }                     
            }
        }
    }else{
        return false;
    }

}

TreeNode* BST::FindRightend(TreeNode *fp){
    if(fp->right == nullptr){
        return fp;
    }
    else{
        FindRightend(fp->right);
    }
}

TreeNode* BST::FindParent(TreeNode *temp, int key){
    if(temp == nullptr || temp->val == key){
        return nullptr;
    }else if(temp->right!=nullptr && temp->right->val == key){  
        return temp;
    }else if(temp->left!=nullptr && temp->left->val == key){
        return temp;
    }else if(key < temp->val){      
        FindParent(temp->left, key);
    }else if(key > temp->val){
        FindParent(temp->right, key);
    }

}


