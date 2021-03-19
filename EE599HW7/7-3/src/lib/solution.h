#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H
#include <vector>
#include <map>
#include <set>
using namespace std;

class Graph{
public:
  Graph(std::map<int, std::set<int>> &vertices):edge_map_(vertices){}
  //std::map<int, std::set<int>> v_;
  std::map<int, std::set<int>> edge_map_;

  void BFS(int root);
  map<int, set<int>> SDP_ALL();
  void add_edge(vector<int> adj[]);
  bool BFS(vector<int> adj[], int src, int dest, int v, int pred[], int dist[]);
  std::set<int> printShortestDistance(vector<int> adj[], int s, int dest, int v); 

  std::vector<int> result;
  std::map<int, int> dis;
};

#endif