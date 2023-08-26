<h2 align="center">Special Kind of Keyboard</h2>

#### Code requirement:
1. time requirement <= 1 second

you will be given a keyboard that entails 26 keys. You will be furnished a unique sequence of the keyboard mapping one row. Eachy key corresponds to a particular lowercase latin letter.

Given a word, $s$, you need to type a given word in the exact order that is given, you need to calculate the total absolute distance between each letter that is typed in. 

For example, we have a regular keyboard mapping ```a, b, c, ... , y, z```, find the absolute distance for ```hello```. 
Since we know that h is at position 8, e is at 5, l is at 12, and o is at 15, ```|5-8| + |5-12| + |12-12| + |15-12| = 13.```

Input: 
The first line contains an integer t, $1 \leq t \leq 1000$ - number of test cases
each test case will have 2 lines, first input is the keyboard mapping, second input is the string you will need to type and find it's absolute distance. 

test case (this particular test case will be provided as txt file):
```
5
abcdefghijklmnopqrstuvwxyz
hello
abcdefghijklmnopqrstuvwxyz
i
abcdefghijklmnopqrstuvwxyz
codeforces
qwertyuiopasdfghjklzxcvbnm
qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq
qwertyuiopasdfghjklzxcvbnm
abacaba
```

output:
```
13
0
68
0
74
```

<font size = 1>Last Updated: 08-11-2023, 12:53:00 pm</font>