#include "src/lib/solution.h"
#include<bits/stdc++.h>


int main()
{
    std::map<int, std::set<int>> vertices{
        {0,{1,2,5}},
        {1,{0,4}},
        {2,{0,1,3}},
        {3,{2,6}},
        {4,{1}},
        {5,{0}},
        {6,{3}}
    };
    Graph g(vertices);
    std::vector<int> result;
    result = g.DFS(0,g.v_);
    for(auto i : result){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return EXIT_SUCCESS;
}