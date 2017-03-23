# Knutt Morris Pratt Matching

### - I. Introduction

In computer science, the Knuth–Morris–Pratt string searching algorithm (or KMP algorithm) searches for occurrences of a "word" W within a main "text string" S by employing the observation that when a mismatch occurs, the word itself embodies sufficient information to determine where the next match could begin, thus bypassing re-examination of previously matched characters. [1]

### - II. Performance

- **Class:** String Matching
- **Preprocessing Time:** O(m)
- **Matching Time:** O(n)

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
```

### - IV. Visual Algorithm Performance

- **Knutt Morris Pratt Matching Dry Run**

![KMPDryRun](http://blog.krzyzanowskim.com/content/images/2015/08/KMP.gif)

### - V. Pseudocode

Following is the pseudocode for Knutt Morris Pratt Matching:

```C++
algorithm kmp_search:
    input:
        an array of characters, S (the text to be searched)
        an array of characters, W (the word sought)
    output:
        an integer (the zero-based position in S at which W is found)

    define variables:
        an integer, m ← 0 (the beginning of the current match in S)
        an integer, i ← 0 (the position of the current character in W)
        an array of integers, T (the table, computed elsewhere)

    while m + i < length(S) do
        if W[i] = S[m + i] then
            if i = length(W) - 1 then
                return m
            let i ← i + 1
        else
            if T[i] > -1 then
                let m ← m + i - T[i], i ← T[i]
            else
                let m ← m + 1, i ← 0
            
    (if we reach here, we have searched all of S unsuccessfully)
    return the length of S
```

### - VI. References

[1] https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm