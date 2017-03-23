# Selection Sort

### - I. Introduction

In computer science, selection sort is a sorting algorithm, specifically an in-place comparison sort. It has O(n2) time complexity, making it inefficient on large lists, and generally performs worse than the similar insertion sort. Selection sort is noted for its simplicity, and it has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited. [1]

### - II. Performance

![SelectionSortPerformance](http://i.imgur.com/3aeZDVo.png)

### - III. Dry Run

This is a dry run for how values change per each iteration for array:

```
Init State : 64 25 12 22 11
Iteration#1: 11 64 25 12 22
Iteration#2: 11 12 64 25 22
Iteration#3: 11 12 22 64 25
Iteration#4: 11 12 22 25 64   // Final State
```

### - IV. Visual Algorithm Performance

- **Selection Sort Dry Run**

![SelectionSortDryRun](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)

- **Selection Sort Animation**

![SelectionSortAnimation](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b0/Selection_sort_animation.gif/250px-Selection_sort_animation.gif)

### - V. References

[1] https://en.wikipedia.org/wiki/Selection_sort