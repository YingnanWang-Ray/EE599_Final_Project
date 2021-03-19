# HW2-Question 7

> Question 7

Write a function that takes two strings ​from ​ and ​to ​ and determines if they are mappable. 
● Two strings are mappable if the characters in ​from ​ can be replaced to get ​to ​ . 
● Each character can only map to itself. 
● The output should be a map: 
	○ Empty map if the mapping is not possible 
	○ The actual map if the mapping was possible: 

### Runtime Analysis:

For this function, we have to consider to use map. I used map.find() with runtime O(logn). And map.clear() with runtime O(n). Map.find() is in a 'for' loop. So totally the runtime should be [`O(nlogn)`]

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

