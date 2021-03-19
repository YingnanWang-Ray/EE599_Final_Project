#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> input;
    input = {5,9,3,1,7,10};
    solution.Sort(input);
    for(auto i : input){
        std::cout<< i <<" ";
    }
    std::cout<<std::endl;
    return EXIT_SUCCESS;
}