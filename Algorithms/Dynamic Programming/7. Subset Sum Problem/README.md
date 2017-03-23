# Subset Sum Problem

### - I. Introduction

In computer science, the subset sum problem is an important problem in complexity theory and cryptography. The problem is this: given a set (or multiset) of integers, is there a non-empty subset whose sum is zero? For example, given the set {−7, −3, −2, 5, 8}, the answer is yes because the subset {−3, −2, 5} sums to zero. The problem is NP-complete. [1]

### - II. Visual Algorithm Performance

- **Subset Sum Problem as Recursion Tree**

![SubsetRecursionTree](https://www.eandbsoftware.org/wp-content/uploads/2014/12/img23.gif)

- **2D Array for Subset Sum Problem**

![SubsetMemo](https://s-media-cache-ak0.pinimg.com/originals/02/c1/1b/02c11bffaba6b146838c304021487e5b.gif)

### - III. Pseudocode

Following is the Code for Subset Sum Problem:

```C++
 initialize a list S to contain one element 0.
 for each i from 1 to N do
   let T be a list consisting of xi + y, for all y in S
   let U be the union of T and S
   sort U
   make S empty 
   let y be the smallest element of U 
   add y to S 
   for each element z of U in increasing order do
      //trim the list by eliminating numbers close to one another
      //and throw out elements greater than s
     if y + cs/N < z ≤ s, set y = z and add z to S 
 if S contains a number between (1 − c)s and s, output yes, otherwise no
```

### - IV. References

[1] https://en.wikipedia.org/wiki/Subset_sum_problem