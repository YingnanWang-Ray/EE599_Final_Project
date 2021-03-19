#include "solution.h"
#include <bits/stdc++.h>

using namespace std;

void Graph::add_edge(vector<int> adj[]){
    std::map<int, std::set<int>>::iterator it;
    for(it = edge_map_.begin(); it!=edge_map_.end();++it){
        for(auto i : it->second){
            adj[it->first].push_back(i);
        }
    }
}

bool Graph::BFS(vector<int> adj[], int src, int dest, int v, int pred[], int dist[]) 
{ 
    list<int> queue; 
    bool visited[v]; 
    for (int i = 0; i < v; i++) { 
        visited[i] = false; 
        dist[i] = INT_MAX; 
        pred[i] = -1; 
    } 
    visited[src] = true; 
    dist[src] = 0; 
    queue.push_back(src); 
  
    while (!queue.empty()) { 
        int u = queue.front(); 
        queue.pop_front(); 
        for (int i = 0; i < int(adj[u].size()); i++) { 
            if (visited[adj[u][i]] == false) { 
                visited[adj[u][i]] = true; 
                dist[adj[u][i]] = dist[u] + 1; 
                pred[adj[u][i]] = u; 
                queue.push_back(adj[u][i]); 
                if (adj[u][i] == dest) 
                   return true; 
            } 
        } 
    } 
  
    return false; 
} 
  
set<int> Graph::printShortestDistance(vector<int> adj[], int s, int dest, int v) 
{ 
    set<int> ans;
    int pred[v], dist[v]; 
    if(s == dest){
        ans.insert(0);
        dis.insert(pair<int, int>(dest,0));
    }
    if (BFS(adj, s, dest, v, pred, dist) == false) 
    { 
        return ans; 
    } 
  
    vector<int> path; 
    int crawl = dest; 
    path.push_back(crawl); 
    while (pred[crawl] != -1) { 
        path.push_back(pred[crawl]); 
        crawl = pred[crawl]; 
    } 
  
    // cout << "Shortest path length is : "
        // << dist[dest]; 
    // cout<<endl;
        dis.insert(pair<int, int>(dest,dist[dest]));

    //cout << "\nPath is::\n"; 
    for (int i = path.size() - 1; i >= 0; i--){
        ans.insert(path[i]);
        //cout << path[i] << " "; 
    }
    return ans;
} 

void Graph::BFS(int root){
    if(edge_map_.empty()){
        return;
    }
    map<int, int> marks;
    queue<int> q;
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

map<int, set<int>> Graph::SDP_ALL(){
    BFS(edge_map_.begin()->first);
    map<int, set<int>> result_map;
    int v = edge_map_.size();
    vector<int> adj[v];
    set<int> temp;
    add_edge(adj);
    for(int j = 0 ; j < int(result.size()) ; j++){
        temp = printShortestDistance(adj,result[0],result[j],v);
        result_map.insert(pair<int, set<int>>(result[j],temp));
    }
    return result_map;
}