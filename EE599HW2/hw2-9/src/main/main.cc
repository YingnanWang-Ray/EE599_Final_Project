#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector<int> inp;
    inp = {1,2,3,4};
    int R = 5;
    solution.NewArray(inp,R);
    for(auto i : inp)
        std::cout<<i<<" ";
    std::cout<<std::endl;
    return EXIT_SUCCESS;
}