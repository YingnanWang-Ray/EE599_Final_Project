#include "solution.h"
#include <iostream>
#include <vector>
#include <algorithm>   
#include <queue>
#include <stack>
#include <set>
using namespace std;

std::set<int> Graph::findroot(){
    std::set<int> node;
    std::set<int> ans;
    std::map<int, std::set<int>>::iterator it;
    std::set<int>::iterator its;
    for(it = edge_map_.begin(); it != edge_map_.end(); ++it){
        ans.insert(it->first);
        for(auto j:it->second){
            node.insert(j); 
        }
    }
    for(its = node.begin(); its != node.end(); ++its){
        if(ans.find(*its)!=ans.end()){
            ans.erase(ans.find(*its));
        }
    }
    return ans;
}


void Graph::DFS_helper_with_topo(int root, std::map<int, int> &marks,std::vector<int> &topo_list) {
    marks[root] = 1;
    for (const int child : edge_map_[root]) {
        if (marks[child] != 1) {
         DFS_helper_with_topo(child, marks, topo_list);
        }
    }
    topo_list.push_back(root);
}

std::vector<int> Graph::TopologicalSort(int root) {
    std::vector<int> topo_list;
    std::map<int, int> marks;
    DFS_helper_with_topo(root, marks, topo_list);
    std::reverse(topo_list.begin(),topo_list.end());
    return topo_list;
}