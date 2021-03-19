#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> a0;
    a0 = {1,2,2,4};
    std::vector<int> a00(a0);
    std::vector<int> a;
    a = {1,2,3};
    std::vector<int> ar;
    ar = {1,2,3};
    std::vector<int> ar2;
    ar2 = {1,2,3};
  
    std::vector<int> b;
    b = {3,5,6};
    std::vector<int> c;
    c = {3,4,5};

    solution.RMDup(a0);
    solution.RMDupS(a00);
    solution.Reverse(ar);
    solution.Even(ar2);


    for(auto i : a0)
        std::cout << i;
    std::cout<<std::endl;
    for(auto i : a00)
        std::cout << i;
    std::cout<<std::endl;
    for(auto i : ar)
        std::cout << i;
    std::cout<<std::endl;
    for(auto i : ar2)
        std::cout << i ;
    std::cout<<std::endl;

    std::vector<int> ansconca(solution.Concatenating(a,b));
    for(int i : ansconca)
        std::cout << i;
    std::cout<<std::endl;

    std::vector<int> ansinter(solution.Intersection(a,c));
    for(int i : ansinter)
        std::cout << i;
    std::cout<<std::endl;
    return EXIT_SUCCESS;
}