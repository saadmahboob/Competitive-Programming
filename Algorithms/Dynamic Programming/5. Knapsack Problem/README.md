# Knapsack Problem

### - I. Introduction

The knapsack problem or rucksack problem is a problem in combinatorial optimization: Given a set of items, each with a weight and a value, determine the number of each item to include in a collection so that the total weight is less than or equal to a given limit and the total value is as large as possible. [1]

### - II. Visual Algorithm Performance

- **Knapsack Problem**

![KnapsackProblem](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fd/Knapsack.svg/250px-Knapsack.svg.png)

- **2D Array for Knapsack Problem**

![KnapsackMemo](http://users.informatik.uni-halle.de/~jopsi/daus/knapsack10.gif)

### - III. Pseudocode

Following is the Code for Edit Distance:

```C++
for j from 0 to W do:
 8     m[0, j] := 0
 9 
10 for i from 1 to n do:
11     for j from 0 to W do:
12         if w[i] > j then:
13             m[i, j] := m[i-1, j]
14         else:
15             m[i, j] := max(m[i-1, j], m[i-1, j-w[i]] + v[i])
```

### - IV. References

[1] https://en.wikipedia.org/wiki/Knapsack_problem