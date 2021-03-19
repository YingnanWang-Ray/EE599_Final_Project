#include "solution.h"
#include <map>
#include <iostream>
using namespace std;
int current_state;
void Solution::In_Out (int i, vector<int> input){

    int temp = 0;
    switch(i){
        case 1: 
            cout << "Output: " << input[0] << endl;
            current_state = 0;
            break;
        case 2:
            temp = input.size() - 1;
            cout << "Output: " << input[temp] << endl;
            current_state = temp;
            break;
        case 3:
            cout << "Output: " << input[current_state] << endl;
            break;
        case 4:
            cout << "Enter the value of i:: " << endl;
            int i;
            cin >> i;
            temp = input.size();
            if (i + current_state >= temp)
            {
                cout<< "Output: Sorry! You cannot traverse " << i << " elements from your current location." << endl;
            }
            else
            {
                cout << "Output: " << input[current_state + i] << endl;
                current_state = current_state + i;
            }
            break;
        case 5:
            cout<<"Exit!"<<endl;
            EXIT_SUCCESS;
        default:
            cout << "Command not found." <<endl;
    }
}



