# Merge Sort

### - I. Introduction

In computer science, merge sort (also commonly spelled mergesort) is an efficient, general-purpose, comparison-based sorting algorithm. Most implementations produce a stable sort, which means that the implementation preserves the input order of equal elements in the sorted output. Mergesort is a divide and conquer algorithm that was invented by John von Neumann in 1945. [1]

### - II. Performance

![MergeSortPerformance](http://i.imgur.com/5IImfBj.png)

### - III. Dry Run

This is a dry run for how values change per each iteration for array:

```
3 7 4 9 5 2 6 1    // Initial State

3 7 4 9   5 2 6 1

3 7   4 9   5 2   6 1

3   7   4   9   5   2    6   1

3 7   4 9   2 5   1 6

3 4 7 9   1 2 5 6

1 2 3 4 5 6 7 9    // Final State
```

### - IV. Visual Algorithm Performance

- **Merge Sort Dry Run**

![MergeSortDryRun](https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif)

- **Merge Sort Animation**

![MergeSortAnimation](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c5/Merge_sort_animation2.gif/220px-Merge_sort_animation2.gif)

- **Complete Example of Merge Sort**

![MergeSortGraph](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e6/Merge_sort_algorithm_diagram.svg/300px-Merge_sort_algorithm_diagram.svg.png)

### - V. Pseudocode

Following is the pseudocode for Merge Sort:

```C++
// array A[] has the items to sort; array B[] is a work array
void BottomUpMergeSort(A[], B[], n)
{
    // Each 1-element run in A is already "sorted".
    // Make successively longer sorted runs of length 2, 4, 8, 16... until whole array is sorted.
    for (width = 1; width < n; width = 2 * width)
    {
        // Array A is full of runs of length width.
        for (i = 0; i < n; i = i + 2 * width)
        {
            // Merge two runs: A[i:i+width-1] and A[i+width:i+2*width-1] to B[]
            // or copy A[i:n-1] to B[] ( if(i+width >= n) )
            BottomUpMerge(A, i, min(i+width, n), min(i+2*width, n), B);
        }
        // Now work array B is full of runs of length 2*width.
        // Copy array B to array A for next iteration.
        // A more efficient implementation would swap the roles of A and B.
        CopyArray(B, A, n);
        // Now array A is full of runs of length 2*width.
    }
}

//  Left run is A[iLeft :iRight-1].
// Right run is A[iRight:iEnd-1  ].
BottomUpMerge(A[], iLeft, iRight, iEnd, B[])
{
    i = iLeft, j = iRight;
    // While there are elements in the left or right runs...
    for (k = iLeft; k < iEnd; k++) {
        // If left run head exists and is <= existing right run head.
        if (i < iRight && (j >= iEnd || A[i] <= A[j])) {
            B[k] = A[i];
            i = i + 1;
        } else {
            B[k] = A[j];
            j = j + 1;    
        }
    } 
}

void CopyArray(B[], A[], n)
{
    for(i = 0; i < n; i++)
        A[i] = B[i];
}
```

### - VI. References

[1] https://en.wikipedia.org/wiki/Merge_sort