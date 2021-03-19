#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    Solution solution;
    vector<int> input = {1, 4, 5, 23, 100, 12, 18, 175};    
    int i;

    while(i!=5){
        cout << "Vector: 1, 4, 5, 23, 100, 12, 18, 175" << endl;
        cout << "***********************************************" << endl;
        cout << "Please choose any of the following options:" << endl;
        cout << "   1. What is the first element?" << endl;
        cout << "   2. What is the last element?" << endl;
        cout << "   3. What is the current element?" <<endl;
        cout << "   4. What is the ith element from the current location?" <<endl;
        cout << "   5. Exit." <<endl;
        cin >> i;
        solution.In_Out(i, input);    
    }
    return EXIT_SUCCESS;
}
