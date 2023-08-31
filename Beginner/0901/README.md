<h2 align="center">0901 - Basic Vector and Loop</h2>

### The Math Language

There are few math terms one might want to learn in advance. 
1. $1e9$, is equal to 1,000,000,000. To remember this, $e9$ is basically saying I have nine zeros.
2. $2e9$, is basically saying, I have nine zeros and it starts at 2. Therefore, 2,000,000,000.
3. $10e9$, this is saying I start with 10 and there is nine zeros at the back. Therefore, 10,000,000,000.
4. $\in$, this symbol is saying
	1. part of
	2. in

	Exmaple: A is a vector that is defined as follow: ```A = {1,2,3,4,5}```. Now if we have an integer variable ```k``` and it has a value of 3. Then we can say $k \in A$ because $k=3$ and the $vector A$ does contain the value $3$ thats why we are saying $k\in A$.
5. $\notin$ is the opposite of $\in$. Example: if we define an integer $m$ and set it to -5. Since the vector $A$ does not contain the value of $-5$, therefore; we can say $m \notin A$. 
6. $10^5$ is saying, $10 \times$ itself for 5 times. So, $10 \times 10 \times 10 \times 10 \times 10$ = 100000. Faster way to do it in your head is, let $b$ be the base, let $x$ be the exponent term such that $b:=10, \text{ } x \in \mathbb{Z}^+$. Since the base is 10, we have to add x amount of 0. For example, 10^3, I have three zeros after 1 that is 1000. 

### Deep Thinking

We know that we can keep adding values to the vector that is commonly called dynamic array, what happen if we define a vector as follow:
```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v(5);
	for(int i=0; i<v.size();++i) cin>>v[i];
}
```

What if we want to add another element to the vector ```v``` with ```push_back```?

What would happen in this case?

**Spoiler Alerts**, different systems and compilers might act differently. In general, they are similar. 

### Lets do problems 

In case you need reference on vector, you can use this [LINK](https://github.com/JeffreyChan0913/EYE/tree/main/Beginner/0825)

##### Problem 1
1. How can we exchange values between two variables? For example, if ```a = 10``` and ```b=20```, how can we exchange the value to ```a=20``` and ```b=10```?
##### Problem 2
1. Define a vector with 10 elements, fill it with ```1 2 ... 9 10```, and then print out the entire vector.
2. Print the odd element: ```1 3 5 7 9```
3. Print the even element in reverse ```10 8 6 4 2```
4. Get two integer inputs, a and b, where $a, b \in \mathbb{Z}, a < b$ that prints ```a a+1 a+2 ... b-1 b```. For example, a=5 b=6, we should see ```5 6```.

input:
```
5 6
```

Output:
```
5 6 // this is the input for problem 2.4
1 2 3 4 5 6 7 8 9 10  // this output is corresponding to Problem 2.1 
1 3 5 7 9  // this output is corresponding to 2.2
10 8 6 4 2 // this output is corresponding to 2.3 
5 6 //this is the output for 2.4 
```

##### Problem 3
1. You are asked to help your professor to create a light weight calculator to calculate the average for the class. You were told that no one get lower than 77 and of course, maximum value we can get is 100. Output one number that is the average. One might discard the values that are not in
range.

First number, n, will represent how many grades you have to calculate, and the next n values will be the grades.

Example: 

input:
```
5
88 99 87 76 80
```

output:
```
88.5
```


Test case:
Input1:
```
5 88 99 87 76 80
```
Output:
```
88.5
```

Input2:
```
10 32 76 67 77 87 89 100 101 33 1
```
Output2:
```
88.25
```

Input3:
```
33 41 134 120 -66 -99 -1 27 1 67 191 69 105 -23 116 -26 -81 22 -37 -56 35 196 42 -68 183 53 28 82 31 189 42 -94 97 186
```
Output:
```
89.5
```

<font size = 1>Last Updated: 08-26-2023, 11:01:00 pm RC</font>
