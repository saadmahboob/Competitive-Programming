# Karatsuba Multiplication

### - I. Introduction

The Karatsuba algorithm is a fast multiplication algorithm. It was discovered by Anatoly Karatsuba in 1960 and published in 1962. It reduces the multiplication of two n-digit numbers to at most n^{1.585} single-digit multiplications in general. It is therefore faster than the classical algorithm, which requires n^{2} single-digit products. [1]

### - II. Performance

- **Class: ** Divide and Conquer Algorithm
- **Worst/Average/Best Case Performance**

![KaratsubaPerformance](https://wikimedia.org/api/rest_v1/media/math/render/svg/6da16366b6718b3e8fe40d5d08c8c06ea107c6b9)

### - III. Visual Algorithm Performance

- **Karatsuba Recursion Tree**

![KaratsubaRecursionTree](http://www.cburch.com/csbsju/cs/160/notes/31/karatex.gif)

- **Karatsuba vs General Multiplication Algorithm in Java JDK**

![Karatsuba Comparison](http://www.javamex.com/tutorials/math/Timing_Karatsuba.png)

- **Karatsuba Recursive Explaination**

![KaratsubaExplaination](http://1.bp.blogspot.com/-rKeteSQeAj0/U60jdwF8D9I/AAAAAAAAB5o/I3VkawLOPo0/s1600/concept.png)

### - IV. Pseudocode

Following is the pseudocode for Karatsuba Multiplication:

```C++
procedure karatsuba(num1, num2)
  if (num1 < 10) or (num2 < 10)
    return num1*num2
  /* calculates the size of the numbers */
  m = max(size_base10(num1), size_base10(num2))
  m2 = m/2
  /* split the digit sequences about the middle */
  high1, low1 = split_at(num1, m2)
  high2, low2 = split_at(num2, m2)
  /* 3 calls made to numbers approximately half the size */
  z0 = karatsuba(low1,low2)
  z1 = karatsuba((low1+high1),(low2+high2))
  z2 = karatsuba(high1,high2)
  return (z2*10^(2*m2))+((z1-z2-z0)*10^(m2))+(z0)
```

### - V. References

[1] https://en.wikipedia.org/wiki/Karatsuba_algorithm