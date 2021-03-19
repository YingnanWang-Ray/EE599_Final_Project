#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  void RMDup(std::vector<int> &input);
  void RMDupS(std::vector<int> &input);
  void Reverse(std::vector<int> &input);
  void Even(std::vector<int> &input);
  std::vector<int> Concatenating(std::vector<int> input1, std::vector<int> input2); 
  std::vector<int> Intersection(std::vector<int> v1, std::vector<int> v2);
};

#endif