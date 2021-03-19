# HW2-Question 4

> Question 4

Write a function swap that will swap the values of the inputs (two integers).  Implement this using pass by reference feature using 1. references 2. pointers 

### Runtime Analysis

This question is asking to use reference and pointer to complete swap.
For both methods, we just need to exchange the value, so the runtime should be [`O(1)`]

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

