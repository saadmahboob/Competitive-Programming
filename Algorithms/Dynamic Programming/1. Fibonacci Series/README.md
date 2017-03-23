# Fibonacci Series

### - I. Introduction

In mathematics, the Fibonacci numbers are the numbers in the following integer sequence, called the Fibonacci sequence, and characterized by the fact that every number after the first two is the sum of the two preceding ones:

1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, .. [1]

### - II. Fibonacci with Dynamic Programming

Memoization needed to be introduced as recompution would slow down the program and waste computational cycles. Each time a new number was computed, it was indexed in a data structure to prevent it from recomputing.

### - III. Visual Algorithm Performance

- **Fibonacci as Pascal Triangle**

![FibPascalTriangle](https://upload.wikimedia.org/wikipedia/commons/thumb/b/bf/PascalTriangleFibanacci.svg/360px-PascalTriangleFibanacci.svg.png)

- **Fibonacci Series Animation**

![FibonacciSeriesAnimation](https://media.giphy.com/media/6i3sJQBTkwkW4/giphy.gif)

### - IV. Pseudocode

Following is the pseudocode for Fibonacci Series:

```C++
def fib(n):
    if n is less than equal to 1
        return n
    else 
        return fib(n-2)+fib(n-1)
```

### - V. References

[1] https://en.wikipedia.org/wiki/Fibonacci_number