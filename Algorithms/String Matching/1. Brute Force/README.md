# Brute Force Matching

### - I. Introduction

In computer science, brute-force search or exhaustive search, also known as generate and test, is a very general problem-solving technique that consists of systematically enumerating all possible candidates for the solution and checking whether each candidate satisfies the problem's statement. [1]

### - II. Performance

- **Class:** String Matching
- **Preprocessing Time:** None
- **Matching Time:** O(n*m)

### - III. Dry Run

This is a dry run for how values change per each iteration:

```
string: aaabcbaabcaab
pattern: aabca

aabcbaabcaab
aabca

aabcbaabcaab
 aabca
 
aabcbaabcaab
  aabca
  
aabcbaabcaab
   aabca
   
aabcbaabcaab
    aabca

aabcbaabcaab
     aabca
```

### - IV. Visual Algorithm Performance

- **Brute Force Matching Dry Run**

![BFDryRun](http://blog.krzyzanowskim.com/content/images/2015/08/naive-1.gif)

### - V. Pseudocode

Following is the pseudocode for Brute Force Matching:

```C++
c ← first(P)
while c ≠ Λ do
 if valid(P,c) then output(P, c)
 c ← next(P,c)
end while
```

### - VI. References

[1] https://en.wikipedia.org/wiki/Brute-force_search