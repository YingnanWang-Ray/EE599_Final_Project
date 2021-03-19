#include "solution.h"
#include<set>
#include<algorithm>

void Solution::RMDup(std::vector<int> &input){
    sort(input.begin(),input.end());
    std::vector<int>::iterator it = unique(input.begin(),input.end());
    input.erase(it,input.end());
}//Do not use set

void Solution::RMDupS(std::vector<int> &input){
    std::set<int> st(input.begin(),input.end());
    input.assign(st.begin(),st.end());
}//Use set

void Solution::Reverse(std::vector<int> &input) {
    int size = input.size();
	int temp;
	for (int i = size; i > size/2 ; i--)
	{
		temp = input[i-1];
		input[i-1] = input[size-i];
		input[size-i] = temp;
	}

}

void Solution::Even(std::vector<int> &input) { 
    for(std::vector<int>::iterator it=input.begin();it<input.end();++it)
    {
        if(*it%2 != 0)
            it = input.erase(it)-1;
        
    }
}

std::vector<int> Solution::Concatenating(std::vector<int> input1, std::vector<int> input2) { 
    std::vector<int> output;
    input1.insert(input1.end(),input2.begin(),input2.end());
    output=input1;
    return output; 
}

std::vector<int> Solution::Intersection(std::vector<int> v1, std::vector<int> v2) {
    std::vector<int> output;
    std::vector<int>::iterator it;
    int size = v2.size();
    for(it = v1.begin();it!=v1.end();++it)
    {
        for(int i = 0; i < size; i++)
        {
            if(*it==v2[i])
                output.push_back(*it);
        }
    }
    return output;
}
