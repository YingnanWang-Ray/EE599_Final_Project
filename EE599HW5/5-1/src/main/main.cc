#include <iostream>
#include <vector>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    vector<int> input = {3,1,6,4,7,8,10,14,13};
    vector<int> output,outputR;
    BST bst(input);
    output = bst.InOrder(); 
    outputR = bst.InOrderR(bst.root_);
    for (auto i : output){
        cout<< i << " ";
    }//No Recusive
    cout<<endl;
    for (auto j : outputR){
        cout<< j << " ";
    }//Recusive
    cout<<endl<<"The depth is ::"<<bst.MaxDepth(bst.root_)<<endl;
    return EXIT_SUCCESS;
}