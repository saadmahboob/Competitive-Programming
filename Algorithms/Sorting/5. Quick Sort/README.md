# Quick Sort

### - I. Introduction

Quicksort (sometimes called partition-exchange sort) is an efficient sorting algorithm, serving as a systematic method for placing the elements of an array in order. Developed by Tony Hoare in 1959,[1] with his work published in 1961,[2] it is still a commonly used algorithm for sorting. When implemented well, it can be about two or three times faster than its main competitors, merge sort and heapsort. [1]

### - II. Performance

![QuickSortPerformance](http://i.imgur.com/eQEVRRU.png)

### - III. Visual Algorithm Performance

- **Quick Sort Dry Run**

![QuickSortDryRun](https://www.tutorialspoint.com/data_structures_algorithms/images/quick_sort_partition_animation.gif)

- **Quick Sort Animation**

![QuickSortAnimation](https://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif)

- **Complete Example of Quick Sort**

![QuickSortGraph](https://upload.wikimedia.org/wikipedia/commons/thumb/a/af/Quicksort-diagram.svg/200px-Quicksort-diagram.svg.png)

### - IV. Pseudocode

Following is the pseudocode for Merge Sort:

```C++
algorithm quicksort(A, lo, hi) is
    if lo < hi then
        p := partition(A, lo, hi)
        quicksort(A, lo, p – 1)
        quicksort(A, p + 1, hi)

algorithm partition(A, lo, hi) is
    pivot := A[hi]
    i := lo     // place for swapping
    for j := lo to hi – 1 do
        if A[j] ≤ pivot then
            swap A[i] with A[j]
            i := i + 1
    swap A[i] with A[hi]
    return i
```

### - V. References

[1] https://en.wikipedia.org/wiki/Quicksort