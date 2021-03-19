#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H
#include <vector>
#include <map>
#include <set>

class Graph{
public:
  Graph(std::map<int, std::set<int>> &vertices):v_(vertices){}
  std::map<int, std::set<int>> v_;
  std::vector<int> DFS(int root, std::map<int, std::set<int>> v);
  void DFS_ALL();
  std::map<int, int> visited;
  std::vector<int> result;
};

#endif