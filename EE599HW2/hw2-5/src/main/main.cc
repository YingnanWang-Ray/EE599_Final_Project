#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string stg0 = "TEST";
    int test0 = 0;
    int test1 = 1;
    
    std::string stg1 = "DE5678";
    solution.Reverses(stg1);
    
    std::string stg2 = "EE599";

    std::cout<<solution.Swap(stg0,test0,test1)<<std::endl;
    std::cout<<stg1<<std::endl;
    std::cout<<solution.lowcase(stg2)<<std::endl;

    return EXIT_SUCCESS;
}