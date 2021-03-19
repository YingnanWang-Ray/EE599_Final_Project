#include "src/lib/solution.h"
#include<bits/stdc++.h>
using namespace std;

int main()
{
    Solution solution;
    std::vector<int> input = {9,7,5,11,12,2,14,3,10,6};
    std::vector<int> result;
    result = solution.rearrange(input,6);
    for(auto i : result){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return EXIT_SUCCESS;
}
