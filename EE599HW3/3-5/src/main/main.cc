#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    AcademicRecord obj1(5,10,95);
    AcademicRecord obj2;
    //obj1.Maths = 5;
    //obj1.Computers = 10;
    //obj1.Physics = 95;
    cout<<"Value before incrementation::"<<endl;
    obj1.print();
    cout<<endl;
    obj1++;
    cout<<"Value after incrementation::"<<endl;
    obj1.print();
    cout<<endl;
    obj1--;
    cout<<"Value after decrementation::"<<endl;
    obj1.print();
    cout<<endl;
    obj2=obj1;
    if(obj2==obj1)
    cout<<"Obj2 is equal to Obj1"<<endl;
    cout<<"Value of Object 2::"<<endl;
    obj2.print();
    cout<<endl;
    obj2+=50;
    cout<<"Value of obj2 after increaing marks by 50 for each subject::"<<endl;
    obj2.print();
    cout<<endl;
    obj2-=30;
    cout<<"Value of obj2 after decreaing marks by 30 for each subject::"<<endl;
    obj2.print();
    cout<<endl;  
    return EXIT_SUCCESS;
}