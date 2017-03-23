# Insertion Sort

### - I. Introduction

Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. [1]

### - II. Performance

![InsertionSortPerformance](http://i.imgur.com/1r26cLq.png)

### - III. Dry Run

This is a dry run for how values change per each iteration for array:

```
3 7 4 9 5 2 6 1    // Initial State
^

3 7 4 9 5 2 6 1
  ^
  
3 7 4 9 5 2 6 1
    ^
    
3 4 7 9 5 2 6 1
      ^
      
3 4 7 9 5 2 6 1
        ^
        
3 4 5 7 9 2 6 1
          ^
          
2 3 4 5 7 9 6 1
            ^
            
2 3 4 5 6 7 9 1
              ^
              
1 2 3 4 5 6 7 9   // Final State
```

### - IV. Visual Algorithm Performance

- **Insertion Sort Dry Run**

![InsertionSortDryRun](https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif)

- **Insertion Sort Animation**

![InsertionSortAnimation](https://upload.wikimedia.org/wikipedia/commons/4/42/Insertion_sort.gif)

- **Graphical Illustration of Insertion Sort**

![InsertionSortGraph](https://upload.wikimedia.org/wikipedia/commons/7/7e/Insertionsort-edited.png)

### - V. Pseudocode

Following is the pseudocode for Insertion Sort:

```C++
for i ← 1 to length(A)
    j ← i
    while j > 0 and A[j-1] > A[j]
        swap A[j] and A[j-1]
        j ← j - 1
    end while
end for
```

### - VI. References

[1] https://en.wikipedia.org/wiki/Insertion_sort