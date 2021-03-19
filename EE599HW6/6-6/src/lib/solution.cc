#include "solution.h"
#include <iostream>
#include <vector>
#include <algorithm>   
// std::merge
#include <stack>
#include <set>

std::vector<int> Solution::rearrange(std::vector<int> input, int i)
{
    std::vector<int> part1;
    std::vector<int> part2;
    std::vector<int> output;
    int comp = input[i];
    for(auto j : input){
        if( j > comp){
            part2.push_back(j);
        }else if ( j < comp ){
            part1.push_back(j);
        }

    }
    output.insert(output.end(),part1.begin(),part1.end());
    output.push_back(comp);
    output.insert(output.end(),part2.begin(),part2.end());
    return output;
}

