#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class MaxHeap{
public:
  MaxHeap(std::vector<int> input);
  int GetParentIndex(int i);
  int GetLeftIndex(int i);
  int GetRightIndex(int i);   
  int GetSmallestChildIndex(int i);
  int GetLargestChildIndex(int i);
  int GetLeft(int i);
  int GetRight(int i);
  int GetParent(int i);
  int top();
  void push(int v);
  void pop();
  void TrickleUp(int i);
  void TrickleDown(int i);
  std::vector<int> data_;
};

#endif