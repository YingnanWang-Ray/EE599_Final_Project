#include "src/lib/solution.h"
#include<bits/stdc++.h>

int main()
{
    std::map<int, std::set<int>> vertices{
        {0,{1}},
        {1,{2,3}},
        {2,{0}},
        {3,{2,4,6}},
        {4,{NULL}},
        {5,{6}},
        {6,{NULL}}
    };
    Graph g(vertices);
    g.DFS_ALL();
    for(auto i : g.result){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return EXIT_SUCCESS;
}