#include <iostream>
#include <algorithm>
#include <vector>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> input;
    int k = 8;
    input = {-2, 3,-1,2,5,6,10};
    std::cout<<solution.Kth(input,k)<<" ";
    std::cout<<input.front()<<std::endl;
    return EXIT_SUCCESS;
}