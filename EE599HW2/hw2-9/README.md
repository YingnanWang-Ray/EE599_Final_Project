# HW2-Question 9

> Question 9

Write a function that takes a vector of integers and a number ​R​ as the input. The number R specifies the number of times the vector should be rotated. Specifically, to “rotate” a vector by 1 means to move each element in the vector to its next right location, while the right-most element will be moved to the left most position. See also the following examples. 

### Runtime Analysis:
	
In thie function, I used insert() with runtime O(n), clear() with runtime O(n), push_back (because for each time I just push one element, so it has a runtime O(n)), assign() with runtime O(logn). So totally the runtime should be O(3n+logn) => [`O(n+logn`]

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

