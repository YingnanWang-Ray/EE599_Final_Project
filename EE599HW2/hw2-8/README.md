# HW2-Question 8

> Question 8

Write a function that:  
● Finds the median value of the vector (the vector is not sorted) 
● It then rearranges the vector in such a way that it will have all the values lower than the median on the left side in ascending order starting from the median and all the greater than the median value on the right side in descending order starting from the median. 

### Runtime Analysis:

First of all, in order to find the median, we have to sort the vector. The runtime of sort is O(nlogn). And for reverse(), it has a runtime of O(n). So totally the runtime is O(nlogn)+O(n/2logn/2)+O(n/2logn/2)+O(n/2)+O(n/2) => [`O(nlogn+n)`]

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

