# Longest Common Substring

### - I. Introduction

In computer science, the longest common substring problem is to find the longest string (or strings) that is a substring (or are substrings) of two or more strings. [1]

### - II. Visual Algorithm Performance

- **LCS Animation**

![LCSAnimation](https://gabrielghe.github.io/assets/themes/images/2016-01-04-longest-common-subsequence3.gif)

- **LCS as Suffix Tree** 

![LCSSuffixTree](https://upload.wikimedia.org/wikipedia/commons/thumb/8/83/Suffix_tree_ABAB_BABA_ABBA.svg/400px-Suffix_tree_ABAB_BABA_ABBA.svg.png)

- **2D Array for LCS**

![LCSMemoization](http://www-igm.univ-mlv.fr/~lecroq/seqcomp/imglec3.gif)

### - III. Pseudocode

Following is the pseudocode for Fibonacci Series:

```C++
function LCSubstr(S[1..m], T[1..n])
    L := array(1..m, 1..n)
    z := 0
    ret := {}
    for i := 1..m
        for j := 1..n
            if S[i] == T[j]
                if i == 1 or j == 1
                    L[i,j] := 1
                else
                    L[i,j] := L[i-1,j-1] + 1
                if L[i,j] > z
                    z := L[i,j]
                    ret := {S[i-z+1..i]}
                else
                if L[i,j] == z
                    ret := ret ∪ {S[i-z+1..i]}
            else 
                L[i,j] := 0
    return ret
```

### - IV. References

[1] https://en.wikipedia.org/wiki/Longest_common_substring_problem