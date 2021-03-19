#include "src/lib/solution.h"
#include<bits/stdc++.h>


int main()
{
    std::map<int, std::set<int>> vertices{
        {0,{1,2,5}},
        {1,{0,2,3}},
        {2,{0,1,3}},
        {3,{1,2,4,6}},
        {4,{3}},
        {5,{0}},
        {6,{3}}

        // {0,{1,2,5}},
        // {1,{0,2,3}},
        // {2,{0,1,7}},
        // {7,{2,3}},
        // {3,{1,7,4,6}},
        // {4,{3}},
        // {5,{0,8}},
        // {6,{3}},
        // {8,{5}}
    };
    Graph g(vertices);
    std::map<int, set<int>>::iterator it;
    std::map<int, int>::iterator it_dis;
    std::map<int, set<int>> ans_map;
    ans_map = g.SDP_ALL();
    std::cout<<"{";
    for(auto i:g.result){
        it_dis = g.dis.find(i);
        std::cout<<"("<<it_dis->first<<","<<it_dis->second<<")";
    }
    std::cout<<"}"<<std::endl;
    for(it = ans_map.begin(); it != ans_map.end(); ++it){
        std::cout<<"{"<<it->first<<",[";
        for(auto i:it->second){
            std::cout<<i<<" ";
        }
        std::cout<<"]}"<<std::endl;
    }
    return EXIT_SUCCESS;
}