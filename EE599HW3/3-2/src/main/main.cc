#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int sum = 5;
    std::vector<int> input;
    input = {1,4,2,3};

    for ( auto i : solution.FindV(input, sum))
        std::cout << i<<" ";
    
    std::cout<<std::endl;
    return EXIT_SUCCESS;
}