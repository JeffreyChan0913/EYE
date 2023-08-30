<h2 align="center">0904 - Basic Vector and Loop</h2>

### Recap

1. $1e9$: is saying, I have 1 in front of 9 zeros, that is 1,000,000,000.
2. $10e9$: is saying, I have 10 in front of 9 zeros, that is 10,000,000,000.
3. $\in$ is saying something in or part of something. For example, ```x = 5```, and we have a vector defined as ```vector<int> v = {1,2,3,4,5};```. We can say, $x \in v$ because v contains 5 and x is 5, so x is in v. 
4. $\notin$: is opposite of (3). if we re use the same vector and define ```y = -1```. Then, $y \notin v$ because vector ```v``` does not contain ```-1```.

### Deep Thinking Solution for 0901 [link](https://github.com/JeffreyChan0913/EYE/blob/main/Beginner/0901/README.md) 

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

In general, we the $\textit{new size}$ is greater than the capacity, we will have to make more room to acomodate the new size. Often time the capacity will be increased by a factor of two. After that, we will have to copy the elements from the old vector to a new one. 

A natural question might follow, what do I mean by copy the elements from the old vector to a new one? 

To answer this question without introducing a series of new knowledge, all we need to know is, it seems like we are expanding the **original** vector and it is not. The general idea would be at follow:
```vector<int> v(5);```
1. if we add new elements to v, the size and the capacity is 5. So, if we decided to add one new value, size + 1 > capaciy we will have to make room for the element.
2. To make room for it, we define a new vector, ```vector<int> temp_vector(v.size()*2);```.
3. move all the elements from v to the temp_vector
4. set v = temp_vector. 

Thats the high level idea. The actual implementation is not what we have from above, however; it will be very similar. 

### Deep Thinking 

There is a function call
1. ```.front()```: Can we implement .front() on our own? how can we do it?
2. ```.back()```: Can we implmeent .back() on our own? how can we do it?

### Lets do problems 

##### Question 1
1. You will ask user to input the capacity of the vector, and then the size of the vector would be capacity * 2. 
2. You will ask user to input the two values, l and r. if l = 1 and r is 3 then you fill the array with 3 values, 1 2 3. If l = 1 and r = 6 then fill the array with 1 2 3 4 5 6. 
3. Ask user to input a value and position where user would like to insert into the vector. 
4. Ask user to provide a value to remove it from the vecotor.
5. Print out the size.

input
```
10 1 6 9 2 5
```

Explaination:
1. capacity = 10
2. l = 1
3. r = 6
4. insert 9
5. position at 2
6. remove the element at position 5.

Output
```
10 1 6 9 2 5
1 2 3 4 5 6 
1 2 9 3 4 5 6 
1 2 9 3 4 6 
6
```

##### Question 2
1. Reverse the vector. For example, if the vector is 5 4 3 2 1-> it will become 1 2 3 4 5 

<font size = 1>Last Updated: 08-26-2023, 11:01:00 pm RC</font>
