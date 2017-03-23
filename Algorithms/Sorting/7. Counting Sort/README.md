# Counting Sort

### - I. Introduction

In computer science, counting sort is an algorithm for sorting a collection of objects according to keys that are small integers; that is, it is an integer sorting algorithm. It operates by counting the number of objects that have each distinct key value, and using arithmetic on those counts to determine the positions of each key value in the output sequence. Its running time is linear in the number of items and the difference between the maximum and minimum key values, so it is only suitable for direct use in situations where the variation in keys is not significantly greater than the number of items. However, it is often used as a subroutine in another sorting algorithm, radix sort, that can handle larger keys more efficiently. [1]

### - II. Performance

- **Class:** Sorting
- **Data Structure:** Array and Map
- **All Cases:** O(n)

### - III. Visual Algorithm Performance

- **Counting Sort Final State**

![CountingSortFinalState](http://algorithms.tutorialhorizon.com/files/2015/02/Counting-Sort-1.png)

- **Overall Counting Sort**

![OverallCountingSort](https://www.safaribooksonline.com/library/view/algorithms-in-a/9780596516246/httpatomoreillycomsourceoreillyimages595756.png)

### - IV. Dry Run

Dry run of Counting sort can be found at: https://www.cs.usfca.edu/~galles/visualization/CountingSort.html

### - V. Pseudocode

Following is the pseudocode for Counting Sort: 

```C++
# calculate the histogram of key frequencies:
for x in input:
    count[key(x)] += 1

# calculate the starting index for each key:
total = 0
for i in range(k):   # i = 0, 1, ... k-1
    oldCount = count[i]
    count[i] = total
    total += oldCount

# copy to output array, preserving order of inputs with equal keys:
for x in input:
    output[count[key(x)]] = x
    count[key(x)] += 1

return output
```

### - V. References

[1] https://en.wikipedia.org/wiki/Counting_sort