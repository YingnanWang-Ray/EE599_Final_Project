# HW2-Question 5

> Question 5

● Write a function that takes a string and two indices i, j as inputs, and then ​swaps​ the character at index i with the one at index j. 

● Write a function that takes a string as an input and ​reverses​ its value. The function has no output. It changes the value of the input parameter. 

● Write a function that converts a string to lower case.

### Runtime Analysis

●To swap the element, the runtime is [`O(1)`]

●Just like the function in question 3. I exchanged the first value with the last value, the second value with the last second value, etc. It only repeat n/2 times. Totaly runtime should be O(3n/2) => [`O(n)`].

●For the function to low case the characters, I created lowcase(). I compared each element to see if they are 'A'-'Z'. If so, minus this element with 32 to change it into low case.
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

