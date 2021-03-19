#include "solution.h"
#include<vector>
#include <algorithm>//std::make_heap, std::pop_heap, std::push_heap, std::sort_heap
#include <iostream>


int Solution::Kth (std::vector<int> &input, int k){
    std::make_heap(input.begin(),input.end());
    if(k >= input.size()){
        return INT32_MIN;
    }
    else if(input.size() == 0){
        return INT32_MIN;
    }
    else
    {
        for(int i = 1; i < k; i++){
            std::pop_heap(input.begin(),input.end());
            input.pop_back();
        }
        return input.front();
    }
    
}

