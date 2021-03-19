#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    std::vector<int> input = {0,1,2,3,4,5,6,7,8};
    MaxHeap maxheap(input);
    int test = 3;
    cout<<"The heap is::";
    for(auto i : maxheap.data_)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"index"<<test<<"->ParentIndex::"<<maxheap.GetParentIndex(test)<<" The number is ::"<<maxheap.GetParent(test)<<endl;
    cout<<"index"<<test<<"->LeftIndex::"<<maxheap.GetLeftIndex(test)<<" The number is ::"<<maxheap.GetLeft(test)<<endl;
    cout<<"index"<<test<<"->RightIndex::"<<maxheap.GetRightIndex(test)<<" The number is ::"<<maxheap.GetRight(test)<<endl;
    cout<<"index"<<test<<"->LargestChildIndex::"<<maxheap.GetLargestChildIndex(test)<<endl;
    cout<<"The biggest number::"<<maxheap.top()<<endl;
    maxheap.pop();
    cout<<"After pop the biggest number is ::"<<maxheap.top()<<endl;
    cout<<"The heap is::";
    for(auto i : maxheap.data_)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    maxheap.push(9);
    cout<<"After push 9 the biggest number is ::"<<maxheap.top()<<endl;
    cout<<"The heap is::";
    for(auto i : maxheap.data_)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return EXIT_SUCCESS;
}
