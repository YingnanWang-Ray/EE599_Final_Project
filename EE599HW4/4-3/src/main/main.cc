#include <iostream>
#include <vector>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    vector<int> input = {3,1,6,4,7,8,10,14,13};
    BST bst(input);
    int target = 6;
    cout<<"Root->val::"<<bst.root_->val<<endl;
    cout<<"Find"<<target<<"?::"<<std::boolalpha<<bst.find(target)<<endl<<endl;
    cout<<std::boolalpha<<bst.erase(target)<<endl<<endl;
    cout<<"Find"<<target<<"?::"<<std::boolalpha<<bst.find(target)<<endl;
    return EXIT_SUCCESS;
}