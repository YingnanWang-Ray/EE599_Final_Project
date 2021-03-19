#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int a = 20;
    int b = 30;
    solution.Swap(&a,&b);
    std::cout<<a<<" "<<b<<std::endl;
    solution.Swap(a,b);
    std::cout<<a<<" "<<b<<std::endl;    
    //std::cout << solution.Swap(a,b) << std::endl;
    return EXIT_SUCCESS;
}