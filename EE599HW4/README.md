# EE599HW4
EE599HW4

Runtime Analysis:

Question 1:
Function Filter() used copy_if() which is O(n). Resize() is O(n). 
Function Map() used transform() which is O(n). Resize() is O(n).
Function Sum() used accumulate() which is also O(n).

So for all the functions, the runtime is O(n).


Question 2:
  MaxHeap(std::vector<int> input);   Constructor function, I used make_heap() which is O(logN)
  int GetParentIndex(int i);	O(1)
  int GetLeftIndex(int i);	O(1)
  int GetRightIndex(int i);   	O(1)
  int GetSmallestChildIndex(int i);	O(1)
  int GetLargestChildIndex(int i);	O(1)
  int GetLeft(int i);		O(1)
  int GetRight(int i);		O(1)
  int GetParent(int i);		O(1)
  int top();			O(1)
  void push(int v);	It should be O(logi) [i is the distance between the begin and the end]
  void pop();	I used swap() which is O(1). Totally it should be O(logi) [i is the distance between the begin and the end]
  void TrickleUp(int i);	Best condition will loop 1 time, the worst condition will loop logi times(swap() O(1) + GetParentIndex O(1))
				So average runtime is O(1/2*logi(O(1)+O(1)) => O(logi)  [i is the distance between the begin and the end]
  void TrickleDown(int i);	Same as the TrickleUp


Question 3:
  BST();					O(1)
  BST(std::vector<int> initial_values);		N times push, so it should be O(nlogn)
  ~BST(){root_=nullptr;}			O(1)

  void push(int key);				Use function insert()----> O(logn)
  bool find(int key);				Use function Search()----> O(logn)
  bool erase(int key);				Use function FindParent()&FindRightend()----->O(logn)
						Case 1: the node has no child node.   O(logn)
						Case 2: the node has only one child node.   O(logn)
						Case 3: the node has two child nodes.	O(logn+logi)

  void insert(TreeNode *&root,int key);		Best condition it will be O(1), the worst condition will be O(log2 n), so the average will be O((logn+1)/2) -> O(logn)
  bool Search(TreeNode *root,int key);		Best condition will be O(1). Otherwise, it will recursion to find the value. Average runtime will be O(logn)
  TreeNode* FindParent(TreeNode *fp, int key);	Best condition will be O(1). Otherwise, it will recursion to find the parentnode. Average runtime will be O(logn)
  TreeNode* FindRightend(TreeNode *fp);		It will always find the right child node. The best condition is O(1), the worst condition is O(logi)	[i is the distance between the fp and the end] 
  


Question 4:
For the function LevelOrder(), we have to push every node of the BST into the queue and then pop the element that has already pushed into the queue. Totally it should be O(2n) -> O(n)



Question 5:
For this function, we have to push the vector into the queue and then pop the element. At the end, reverse the output vector.
So totally the runtime should be O(n+n+n) -> O(n)


Question 6:
At first, we have to make the heap. And then pop K times to find the Kth largest number.
So the runtime should be O(logn + k)
