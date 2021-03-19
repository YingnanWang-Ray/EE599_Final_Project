#include "solution.h"
#include<vector>
#include <algorithm>
#include <queue>// std::priority_queue

void Solution::Sort (std::vector<int> &input){
    std::priority_queue<int> queue;
    std::vector<int> result;
    for(int i: input){
        queue.push(i);
    }

    while(!queue.empty()){
        result.push_back(queue.top());
        queue.pop();
    }
    std::reverse(result.begin(),result.end());
    input = result; 
}