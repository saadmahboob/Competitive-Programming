# Digit Sequence Decoding

### - I. Introduction

Given a digit sequence, count the number of possible decodings of the given digit sequence.

```
Input:  digits[] = "121"
Output: 3
// The possible decodings are "ABA", "AU", "LA"

Input: digits[] = "1234"
Output: 3
// The possible decodings are "ABCD", "LCD", "AWD"
``` 

### - II. Visual Algorithm Performance

- **Digit Sequence Decoding as a Recursion Tree**

![DSDRecursionTree](http://www.ideserve.co.in/learn/img/possibleDecodings_0.gif)

### - III. Pseudocode

Following is the Code for Digit Sequence Decoding(non dynamic programming approach):

```C++
int countDecoding(char *digits, int n)
{
    // base cases
    if (n == 0 || n == 1)
        return 1;
 
    int count = 0;  // Initialize count
 
    // If the last digit is not 0, then last digit must add to
    // the number of words
    if (digits[n-1] > '0')
        count =  countDecoding(digits, n-1);
 
    // If the last two digits form a number smaller than or equal to 26,
    // then consider last two digits and recur
    if (digits[n-2] < '2' || (digits[n-2] == '2' && digits[n-1] < '7') )
        count +=  countDecoding(digits, n-2);
 
    return count;
}
```
