#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> input;
    input = {1,2,3,4,5,6,7,8};
    std::vector<int> output_Filter;
    std::vector<int> output_Map;
    output_Filter = solution.Filter(input);
    std::cout<<"After filter the vector is::{";
    for(auto i : output_Filter)
        std::cout<< i <<" ";
    std::cout<<"}"<<std::endl;
    output_Map = solution.Map(input);

    std::cout<<"After mulitper itself the vector is::{";
    for(auto i : output_Map)
        std::cout<< i <<" ";
    std::cout<<"}"<<std::endl;

    std::cout<<"The sum of the vectoris ::"<<solution.Sum(input)<<std::endl;
    return EXIT_SUCCESS;
}