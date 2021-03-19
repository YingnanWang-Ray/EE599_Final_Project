#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    //std::string str = "(a+b)[c*d]{5g+h}";
    std::string str = "(a+b)[c*d]{5g+h}";
    std::cout<<std::boolalpha<<solution.match(str)<<std::endl;
    return EXIT_SUCCESS;
}