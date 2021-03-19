#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int a = 599;
    int b = 1;
    std::string aa = "ee";
    std::string bb = "EE";

    std::cout << solution.Add(a,b) << std::endl;
    std::cout << solution.Add(aa,bb) << std::endl;
    std::cout << solution.Add(bb,a) << std::endl;
    std::cout << solution.Add(b,aa) << std::endl;
    return EXIT_SUCCESS;
}