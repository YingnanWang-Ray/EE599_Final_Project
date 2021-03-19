#include "solution.h"
#include <bits/stdc++.h>
//https://www.geeksforgeeks.org/number-shortest-paths-unweighted-directed-graph/
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
  
int Graph::ShortestDistance(vector<int> adj[], int s, int dest, int v) 
{ 
    int ans;
    int pred[v], dist[v]; 
    if(s == dest){
        ans = 0;
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
    ans = dist[dest];
    return ans;
}

void Graph::getAllPaths(int s, int d) 
{ 
    int V = edge_map_.size();
    bool *visited = new bool[V]; 
  
    // Create an array to store paths 
    int *path = new int[V]; 
    int path_index = 0; // Initialize path[] as empty 
  
    // Initialize all vertices as not visited 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 
  
    // Call the recursive helper function to print all paths 
    printAllPathsUtil(s, d, visited, path, path_index); 
    
    for(auto i:paths_all){
        for(auto j:i){
            passthrough.insert(j);
        }
    }
}

void Graph::printAllPathsUtil(int u, int d, bool visited[], 
                            int path[], int &path_index) 
{ 
    vector<int> adj[edge_map_.size()];
    add_edge(adj);
    vector<int> ppath;
    //Get shortest paths' length
    if(minsize == 0){
        minsize = ShortestDistance(adj, edge_map_.begin()->first, edge_map_.end()->first-1, edge_map_.size())+1;
    }
    // Mark the current node and store it in path[] 
    visited[u] = true; 
    path[path_index] = u; 
    path_index++; 
    // If current vertex is same as destination, then print 
    // current path[] 
    
    if (u == d) 
    { 
        for (int i = 0; i<path_index; i++){
            ppath.push_back(path[i]);
        }       
    } 
    else // If current vertex is not destination 
    { 
        // Recur for all the vertices adjacent to current vertex 
        vector<int>::iterator i; 
        for (i = adj[u].begin(); i != adj[u].end(); ++i) 
            if (!visited[*i]) 
                printAllPathsUtil(*i, d, visited, path, path_index); 
    } 
    // Remove current vertex from path[] and mark it as unvisited 
    path_index--; 
    visited[u] = false; 

    if(int(ppath.size()) == minsize){
        paths_all.push_back(ppath);
    }
}

vector<bool> Graph::PassI(){
    vector<bool> ans;
    map<int, set<int>>::iterator it;
    set<int>::iterator itf;

    getAllPaths(edge_map_.begin()->first,edge_map_.end()->first-1);

    for(it = edge_map_.begin(); it != edge_map_.end(); ++it){
        itf = passthrough.find(it->first);
        if(itf != passthrough.end()){
            ans.push_back(true);
        }else{
            ans.push_back(false);            
        }
    }
    return ans;
}