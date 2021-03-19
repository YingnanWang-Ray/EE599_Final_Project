# HW2-Question 1

> Question 1
Write several functions with the same name ​Add​ using function overloading to satisfy the following requirements:
	 ● All three functions take ​2 parameters​ as the input. 
	 ● If both inputs are ​integers​ perform ​addition​ and return the result. 
	 ● If both inputs are ​string​, ​concatenate​ both the strings and return the output. 
	 ● If the first input is ​an integer​ and the second input is ​a string​ or vice-versa your code should return a string that will hold the ​concatenated​ value of both the inputs. 

### Runtime Analysis:

I created 4 functions, I overloaded the function Add().
For every function, it just runs once. So the time is O(1) => O(n).

### Run main:

You can run this using `bazel`:

```bash
bazel run src/main:main
```

### Run Tests:

You can run unit tests using [`bazel`](installing-bazel):

```bash
bazel test tests:tests
```

