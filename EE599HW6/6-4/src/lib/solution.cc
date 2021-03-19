#include "solution.h"
#include <iostream>
#include <vector>
#include <algorithm>   
#include <stack>
#include <set>

std::vector<int> Graph::DFS(int root, std::map<int, std::set<int>> v){
    std::map<int, std::set<int>>::iterator ite;
    std::map<int, std::set<int>>::iterator temp0;
    std::map<int, int>::iterator temp1;

    for(ite = v.begin(); ite != v.end(); ++ite){
        visited.insert(std::pair<int,int>(ite->first,0));
    }

    std::set<int>::reverse_iterator st;
    std::vector<int> output;
    std::stack<int> s;

    s.push(root);
    temp1 = visited.find(root);
    temp1->second = 1;

    while(!s.empty()){
        int x = s.top();
        temp0 = v.find(x);
        int size = temp0->second.size();
        int count = 0;
        for(st=temp0->second.rbegin(); st != (temp0->second).rend(); ++st){
            int y = *st;
            temp1 = visited.find(y);
            if(temp1->second == 0){
                temp1->second = 1;
                s.push(y);
                break;
            } else if(temp1->second == 1){
                count++;
                if(count==size){
                    output.push_back(s.top());
                    s.pop();
                }
            }
        }    
    }
    std::reverse(output.begin(),output.end());
    return output;
}

void Graph::DFS_ALL(){
    result = DFS(v_.begin()->first, v_);
    std::map<int, int>::iterator ite;
    for(ite = visited.begin(); ite != visited.end(); ++ite){
        if(ite->second == 0){
            std::vector<int> temp = DFS(ite->first, v_);
            result.insert(result.end(),temp.begin(),temp.end());
        }
    } 
        
}
