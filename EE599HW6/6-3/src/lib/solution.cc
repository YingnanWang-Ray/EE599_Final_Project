#include "solution.h"
#include <iostream>
#include <vector>
#include <algorithm>   
// std::reverse
#include <stack>
#include <set>

std::vector<int> Graph::DFS(int root, std::map<int, std::set<int>> v){
    std::map<int, std::set<int>>::iterator ite;
    std::map<int, std::set<int>>::iterator temp0;
    std::map<int, int>::iterator temp1;
    std::map<int, int> visited;
    for(ite = v.begin(); ite != v.end(); ++ite){
        visited.insert(std::pair<int,int>(ite->first,0));
    }

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
        for(auto y:temp0->second){
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


