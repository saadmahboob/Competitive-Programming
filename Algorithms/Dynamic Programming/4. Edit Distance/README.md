# Edit Distance

### - I. Introduction

In computer science, edit distance is a way of quantifying how dissimilar two strings (e.g., words) are to one another by counting the minimum number of operations required to transform one string into the other. Edit distances find applications in natural language processing, where automatic spelling correction can determine candidate corrections for a misspelled word by selecting words from a dictionary that have a low distance to the word in question. In bioinformatics, it can be used to quantify the similarity of DNA sequences, which can be viewed as strings of the letters A, C, G and T. [1]

### - II. Visual Algorithm Performance

- **Edit Distance Algorithm**

![EDAlgorithm](https://wikimedia.org/api/rest_v1/media/math/render/svg/1deeeaebff36dc4bdc79778bcafe0ec17ce63f83)

- **2D Array for Edit Distance**

![EditDistanceMemo](https://tomcircle.files.wordpress.com/2013/10/20131027-024724.jpg)

### - III. Pseudocode

Following is the Code for Edit Distance:

```C++
int count(string s1, string s2)
{
        int m = s1.length();
        int n = s2.length();
        for (int i = 0; i <= m; i++) {
                v[i][0] = i;
        }
        for (int j = 0; j <= n; j++) {
                v[0][j] = j;
        }
 
        for (int i = 1; i <= m; i++) {
                for (int j = 1; j <= n; j++) {
                        if (s1[i-1] == s2[j-1]) v[i][j] = v[i-1][j-1];
                        else v[i][j] = 1 + min(min(v[i][j-1],v[i-1][j]),v[i-1][j-1]);
                }
        }
 
        return v[m][n];
}
```

### - IV. References

[1] https://en.wikipedia.org/wiki/Edit_distance