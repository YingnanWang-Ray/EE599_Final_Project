#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    const std::vector<int> input = {1,2,3,6,5};
    int i = -1;
    //input = {1,2,3,5,6};
    SinglyLinkedList sll(input,i);
    cout<<"Size::"<<sll.size()<<" Empty::"<<std::boolalpha<<sll.empty()<<endl;
    sll.push_back(7);
    sll.push_front(0);
    cout<<"Back::"<<sll.back()<<" Front::"<<sll.front()<<endl;
    sll.print();
    sll.pop_front();
    sll.pop_back();
    cout<<"Pop front_back::";
    sll.print();
    ListNode *f = new ListNode(3);
    sll.insert_after(f,4);
    cout<<"Insert 4 after"<<f->val<<endl;
    sll.print();
    ListNode *ff = new ListNode(6);
    sll.erase(ff);
    cout<<"After delete "<<ff->val<<"::";
    sll.print();
    int ith = 4;
    cout<<"The value of last item pointer now is::"<<sll.GetBackPointer()->val<<endl;
    cout<<"The value of"<<ith<<" item pointer now is::"<<sll.GetIthPointer(ith)->val<<endl;

    return EXIT_SUCCESS;
}