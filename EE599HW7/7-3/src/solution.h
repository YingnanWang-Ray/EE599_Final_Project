#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H
#include <vector>
#include <map>
#include <set>

class Graph{
public:
  Graph(std::map<int, std::set<int>> &vertices):edge_map_(vertices){}
  //std::map<int, std::set<int>> v_;
  std::map<int, std::set<int>> edge_map_;
  std::map<int, int> ShortestDis(int root);
  std::map<int, std::vector<int>> ShortestPaths(int root);
  void PrintMap(std::map<int, std::set<int>> level_node);
  void BFS(int root);

  std::vector<int> result;
};

#endif