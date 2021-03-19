#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H
#include <vector>
#include <map>
#include <set>
using namespace std;

class Graph{
public:
  Graph(map<int, set<int>> &vertices):edge_map_(vertices){}
  map<int, set<int>> edge_map_;

  void add_edge(vector<int> adj[]);
  int ShortestDistance(vector<int> adj[], int s, int dest, int v);
  bool BFS(vector<int> adj[], int src, int dest, int v, int pred[], int dist[]);
  
  void getAllPaths(int s, int d);
  void printAllPathsUtil(int u, int d, bool visited[], int path[], int &path_index);
  vector<bool> PassI();  
  set<int> passthrough;

  vector<vector<int>> paths_all;
  int minsize = 0;

};

#endif