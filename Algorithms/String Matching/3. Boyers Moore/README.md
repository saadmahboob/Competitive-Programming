# Boyer Moore Matching

### - I. Introduction

In computer science, the Boyer–Moore string search algorithm is an efficient string searching algorithm that is the standard benchmark for practical string search literature. It was developed by Robert S. Boyer and J Strother Moore in 1977. The algorithm preprocesses the string being searched for (the pattern), but not the string being searched in (the text). It is thus well-suited for applications in which the pattern is much shorter than the text or where it persists across multiple searches. [1]

### - II. Performance

- **Class:** String Matching
- **Preprocessing Time:** O(m*k)
- **Matching Time(best):** O(n/m)
- **Matching Time(worst):** O(m*n)

### - III. Dry Run

This is a dry run for how values change per each iteration for array:

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

- **Boyer Moore Matching Dry Run**

![BMDryRun](http://blog.krzyzanowskim.com/content/images/2015/08/Boyer-Moore.gif)

### - V. References

[1] https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm