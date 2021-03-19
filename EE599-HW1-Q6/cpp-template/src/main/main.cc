#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::cout << solution.PrintHelloWorld() << std::endl;
    int n = -3;
    std::cout << solution.Factorialr(n) << std::endl;
    std::cout << solution.Factorialnr(n) << std::endl;


    return EXIT_SUCCESS;
}