#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector<int> inp;
    inp={637,231,123,43,69,43,900,10,7,21,99,0,500};
    //inp={6,5,4,3,2,1};
    solution.NewArray(inp);
    for(auto i : inp)
        std::cout<<i<<" ";
    std::cout<<std::endl;
    return EXIT_SUCCESS;
}