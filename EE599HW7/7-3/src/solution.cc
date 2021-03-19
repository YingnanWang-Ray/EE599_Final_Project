#include "solution.h"
#include <iostream>
#include <vector>
#include <algorithm>   
#include <queue>
#include <stack>
#include <set>

using namespace std;

void Graph::BFS(int root){
    if(edge_map_.empty()){
        return;
    }
    std::map<int, int> marks;
    std::queue<int> q;
    q.push(root);
    marks[root] = 1;
    while (!q.empty()){
        int cur = q.front();
        result.push_back(cur);
        q.pop();
        for (auto &n: edge_map_[cur]){
            if(!marks[n]){
                marks[n] = 1;
                q.push(n);
            }
        }
    }
}

std::map<int, int> Graph::ShortestDis(int root){
    std::map<int, std::set<int>>::iterator itln;
    std::map<int, std::set<int>> level_node;
    std::set<int> nodes;
    std::map<int, int> marks;
    std::queue<int> q;
    std::map<int, int> res;
    if(edge_map_.empty()){
        return res;
    }
    int level = 0;

    q.push(root);
    res.insert(std::pair<int,int>(root,level));
    level_node.insert(std::pair<int, std::set<int>>(0,{root}));
    level++;
    marks[root] = 1;
    while (!q.empty()){
        int cur = q.front();
        result.push_back(cur);
        q.pop();
        if ( cur == root ){
            level_node.insert(std::pair<int, std::set<int>>(1,edge_map_[cur]));
        }
        std::cout<<"Current"<<cur<<std::endl;
        for( itln = level_node.begin(); itln != level_node.end(); ++itln){
            if(itln->second.find(cur) != itln->second.end()){
                nodes = edge_map_[cur].erase(itln->first);
                level_node.insert(std::pair<int, std::set<int>>(itln->first+1,nodes));
            }
        }
        PrintMap(level_node);
        for (auto &n: edge_map_[cur]){

            if(!marks[n]){
                marks[n] = 1;
                for( itln = level_node.begin(); itln != level_node.end(); ++itln){
                    if(itln->second.find(n) != itln->second.end()){
                        level = itln->first;
                    }
                }                
                res.insert(std::pair<int,int>(n,level));
                q.push(n);
            }
        }
        
    }
    return res;
}
void Graph::PrintMap(std::map<int, std::set<int>> level_node){
    std::map<int, std::set<int>>::iterator itln;   
    for( itln = level_node.begin(); itln != level_node.end(); ++itln){
        std::cout<<"Level::"<<itln->first<<std::endl;
        for(auto i : itln->second){
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
    }            
}
    // result.clear();
    // BFS(root);
    // std::map<int, int> res;
    // std::set<int>::iterator it;
    // if(edge_map_.empty()){
    //     return res;
    // }
    // int level = 0;
    // res.insert(std::pair<int,int>(root,level));
    
    // for(auto i : result){
    //     it = edge_map_.find(i)->second;
        
    // }



    // return res;

std::map<int, std::vector<int>> Graph::ShortestPaths(int root){
    std::map<int, int> marks;
    std::queue<int> q;
    std::map<int, std::vector<int>> res;
    if(edge_map_.empty()){
        return res;
    }
    std::vector<int> path;
    int level = 0;
    bool r = 0;

    q.push(root);
    path.push_back(root);
    //res.insert(std::pair<int,std::vector<int>>(root,path));
    level++;
    marks[root] = 1;
    while (!q.empty()){
        r = 0;
        int cur = q.front();
        result.push_back(cur);
        res.insert(std::pair<int,std::vector<int>>(cur,path));
        q.pop();
        for (auto &n: edge_map_[cur]){
            if(!marks[n]){
                marks[n] = 1;
                if(res.find(n)->second[0] != cur){
                    res.find(n)->second.push_back(n);
                }
                q.push(n);
                r = 1;
            }
        }
        if( r == 1 ){
            level++;
        }


    }
    return res;
}