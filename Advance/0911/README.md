<h2 align="center">0904</h2>

## Problem Day 

### Problem 1
##### time limit per test case: 1 second 

We encode a string, $S$ where $s_i \in S$  and $1\leq s_i \leq 26$, with the following rules
1. If the letter is a single digit $s_i < 10$, we simply just use that digit. 
2. if the letter is two digits that is $s_i+s_{i+1} \geq 10$, then we use that two digits and add a 0 right after it. 

If the given string is 18100, then we can think of it as the following: 
1. ```a``` is located the first value, so 1.
2. ```h``` is located at the 8th position, so 8
3. ```j``` is located at the 10th position, so 10 + 0

As a result ```18100``` is decoded as ```ahj```.

test case - [LINK](https://github.com/JeffreyChan0913/INTERMEDIATE/blob/main/0826/testcase.txt)

input:

1. test case number, $1\leq t \leq 10^4$
2. n digits to take in and $1 \leq n \leq 50$
3. n digits to be read, expect the resultant is in lowercase. 

```
3
5
18100
3
123
6
100100
```

output:
```
ahj
abc
jj
```
<font size = 1>Last Updated: 08-11-2023, 12:53:00 pm T2-117</font>
