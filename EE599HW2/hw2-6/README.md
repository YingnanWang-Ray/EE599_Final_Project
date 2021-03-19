# HW2-Question 6

> Question 6

Simple Palindrome:​ Write a function that accepts a string as input and returns true if the input is a palindrome and false if it is not. 
 
### Runtime Analysis:

For this question, I declared two pointers, '*b' and '*e'. One is from the beginning and the other one is from the end. In order to compare the value from beginning and the end, we have to consider that we won't count symbols, and different case of characters are also considered as the same. 

What we need to do is to read the whole string from beginning and end at the same time. It should be O(n/2) => [`O(n)`]

### Run main:

You can run this using `blaze`:

```bash
bazel run src/main:main
```

### Run Tests:

You can run unit tests using [`blaze`](installing-bazel):

```bash
bazel test tests:tests
```

