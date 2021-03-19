#include "src/lib/solution.h"
#include<bits/stdc++.h>
using namespace std;

int main()
{
    std::map<int, std::set<int>> vertices{
        {0,{1,4,5}},
        {1,{0,2,3}},
        {2,{1,3,8}},
        {3,{1,2}},
        {4,{0}},
        {5,{0,6}},
        {6,{5,8}},
        {7,{6,8}},
        {8,{2,6,7}}
    };
    Graph g(vertices);
    g.PassI();
    for(auto i:g.PassI()){
        cout<<boolalpha<<i<<" ";
    }
    cout<<endl;
    return EXIT_SUCCESS;
}