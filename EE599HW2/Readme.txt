#I created 8 folders for each questions. And a.cpp is for question 2.
All the functions work. Can simply use 'bazel run src/main:main' and 'bazel test tests:tests' to run and GTest.




#This Part is to explain the Question 2.
The file a.cpp is the code of the Question 2. I used the pointers for arrays of integers and chars. And I used another method to get the length of the array of float.

*For example, if the integer array is {1,2,3,4,5,6,7,8,9,0}. I use a pointer *p to point to the beginning of the array. And for each 'for' loop, count + 1. When the value of the pointer p is '\0', it means the array is end. Then end the loop. In this way, we can figure the size of the array.

So does the char array. However, float array is a little different. I tried to use float pointer, and match the value with '\0', but it didn't work as I expected. So I used for(auto i : c) to read all the array and add the count by 1 each time.

All of the function or method have a runtime of O(n).