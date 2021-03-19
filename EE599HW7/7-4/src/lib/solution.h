#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H
#include <vector>
#include <map>
#include <set>

class Graph{
public:
  Graph(std::map<int, std::set<int>> &vertices):edge_map_(vertices){}
  std::map<int, std::set<int>> edge_map_;
  std::set<int> findroot();
  void DFS_helper_with_topo(int root, std::map<int, int> &marks,std::vector<int> &topo_list);
  std::vector<int> TopologicalSort(int root); 

  std::vector<int> result;
};

#endif