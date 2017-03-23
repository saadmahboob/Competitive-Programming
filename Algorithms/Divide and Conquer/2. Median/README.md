# Median

### - I. Introduction

In computer science, the median algorithm is a selection algorithm based on the quickselect algorithm, and is optimal, having worst-case linear time complexity for selecting the kth largest element. The algorithm finds an approximate median in linear time—this is the key step—which is then used as a pivot in quickselect. [1]

### - II. Performance

![MedianPerformance](http://i.imgur.com/8Rhdw4b.png)

### - III. Pseudocode

Following is the pseudocode for Median:

```C++
function select(list, left, right, n)
    loop
        if left = right
             return left
        pivotIndex := pivot(list, left, right)
        pivotIndex := partition(list, left, right, pivotIndex)
        if n = pivotIndex
            return n
        else if n < pivotIndex
            right := pivotIndex - 1
        else
            left := pivotIndex + 1
```

### - IV. References

[1] https://en.wikipedia.org/wiki/Median_of_medians