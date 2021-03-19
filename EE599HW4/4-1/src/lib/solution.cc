#include "solution.h"
#include<vector>
#include<algorithm>// std::transform
#include <numeric> //std::accumulate


std::vector<int> Solution::Filter(std::vector<int> input){
    std::vector<int> output (input.size());
    auto it = std::copy_if(input.begin(), input.end(), output.begin(), [](int i){return !(i%2!=0);});
    output.resize(std::distance(output.begin(),it));
    return output;
}

std::vector<int> Solution::Map(std::vector<int> input){
    std::vector<int> output(input.size());
    auto it = std::transform(input.begin(), input.end(), output.begin(), [](int i){return i*i;});
    output.resize(std::distance(output.begin(),it));
    return output;
}

int Solution::Sum(std::vector<int> input){
    int output;    
    output = std::accumulate(input.begin(), input.end(), 0);
    return output;    
}