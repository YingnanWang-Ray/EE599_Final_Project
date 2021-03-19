# EE599HW5
EE599HW5
Because the HW5 is asking to build up two functions based on the Question 3 in HW4. So I just writed several functions named   
  int MaxDepth(TreeNode *root);                                //Question 1. To find the depth of the tree.  This function just traversal all the node(leaf) in the tree. Even it used the recursive method. The runtime should be O(n).
  
  
  
  std::vector<int> InOrder();  					//Question 2. This is the function didn't use recursive method.      I used the function used in hw4 question4, the queue. And I also used sort. So the totally runtime should be O(n+n*log2(n))
  
  
  
  std::vector<int> InOrderR(TreeNode *root);		//Question 2. This is the function used recursive method.	The runtime is the same as the function MaxDepth. It's O(n).
 
 
 
 void Clean();									//Use to clean up the global variable		O(1)
