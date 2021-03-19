#include "src/lib/solution.h"
#include<bits/stdc++.h>


int main()
{
    std::map<int, std::set<int>> vertices{
        {7,{6,5}},
        {6,{4,3}},
        {5,{4,2}},
        {4,{}},
        {3,{1}},
        {2,{1}},
        {1,{0}},
        {0,{}}
    };
    Graph g(vertices);

    std::set<int> ans;
    ans = g.findroot();
    int root;
    std::cout<<"[";
    for(auto i : ans){
        std::cout<<i;
        root = i;
    }
    std::cout<<"]"<<std::endl;

    std::vector<int> result_topo;
    result_topo = g.TopologicalSort(root);
    for(auto j:result_topo){
        std::cout<<j<<" ";
    }
    std::cout<<std::endl;
    return EXIT_SUCCESS;
}