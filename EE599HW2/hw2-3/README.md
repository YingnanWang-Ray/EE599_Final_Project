# HW2-Question 3

> Question 3

● Write a function that takes a vector of integers as input. The output is the same vector (i.e. the function's return type should be void) where all ​duplicates​ ​are removed​. 
● Write a function that takes a vector of integers as input. The output is the same vector but in ​reversed​ ​order​.
● Write a function that takes a vector of integers as input. The output should be the same vector where all ​odd numbers are removed​. 
● Write a function that inputs two vectors of integers, and returns a new vector formed by concatenating​ the two input vectors. 
● Write a function that takes two vectors v1 and v2, and returns a new vector that is the union​ of the values in v1 and v2. 

### Runtime Analysis:

● For the function to remove duplicates, I created RMDup() :[Not use set] & RMDups() :[By using set].
	
For RMDup(), I used std::sort() with runtime O(nlog(n)). I used unique() with runtime O(n^2). I also used erase() with runtime O(n). So totally the runtime should be [`O(n^2)`];

For RMDups(), I used set, so when gave the value to set, the runtime should be [`O(logn)`].

●For the function to reverse, I created Reverse().
	
I exchanged the first value with the last value, the second value with the last second value, etc. It only repeat n/2 times. Totaly runtime should be O(3n/2) => [`O(n)`].

●For the function to remove odd, I created Even(). It also called erase(). The best condition is that all the elements are even, so runtime is O(1). The worst condition is that all the elements are odd, so runtime is O(n). So the average time should be [`O(n)`]

●For the function to concatente two vector, I created Concatenating(). I used vector::insert() with runtime O(n). So the time is [`O(n)`]

●For the function to find intersection part, I created Intersection(). This function has to read both vector. So totally time should be [`O(n^2)`]

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

