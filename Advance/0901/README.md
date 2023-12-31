## Hashing

The idea of hashing is as follow: 

We want to use the least amount of time to access a particular element. For example, there is an event in your school, what it does is we layout 10,000 boxes on the hallway. The instruction states that, there are **TWO** blue keys inside two separated boxes and within three mins, you will need to
find the two keys inorder to win \$100,000. 


Now, all the people are attending the game and everyone is trying to search for the keys by going thru all the boxes from the left to the right. Well, there are 10,000 boxes which means each second you will have to check 55 boxes. However; you have a peice of insider information. The indsider
tells you that, two keys are located at **3333** and **8888**. Thats all you know. Since there are too many boxes and the only infomation you have received is **3333** and **8888**. That must be the box numbers. Now, you have to label the boxes in your mind with a sequence of numbers. The
first box you see from where you stand, you label it as 1, the second box is 2, the third box is 3, $\dots$. Since you already know where are they keys, what you can do is to go straight to the box that is located at **3333** and **8888**. By doing so, you do not have to search all the boxes. And
all you need to do is, get yourself to the box **3333** and **8888** to open up the boxes and retrieve the keys. 

So the idea of hashing is, you need to define a set of rules (hash function) that takes in a key and output a value. 

From our previous example, the function is $1:1$, why? Because box number **One** is at location **1**, box number **Two** is at location **2**. As a result, we do have a $1:1$ function. 

If we think about the alphabet, what is the location of a? what is the location of z? What is the location of j? One might need to sing the song from the beginning. As a result, lets look at the following.
```
key     : a b c d e f g h i j	k   l	m   n  o   p   q   r   s   t   u   v   w   x   y   z
value   : 1 2 3 4 5 6 7 8 9 10	11  12  13  14 15  16  17  18  19  20  21  22  23  24  25  26
```

This sequence of positions are well known to its corresponding values. The problem is, can we do the same thing in coding? 

Lets define alphabet for the following approches: ```a b c d e f g h i j k l m n o p q r s t u v w x y z```

Approach 1:

Physically add all the lower case alphabets a to z into the array. When we want a particular value's location, we just search it and retrieve its index that has to be our value. such approach is $O(n)$ where n is the length of the alphabet. 

So our function is : $h(x) \mapsto \text{ }  y \text{ }  | \text{ }  x \in \text{alphabet}, \text{ } y \in \{1,\dots,26\}$ 

Approach 2: 

We use ASCII code as our index which is starting from ASCII(a) = 97, ... , ASCII(z) = 122. ASCII code [ref](https://www.asciitable.com) 

hash function: $h(x) \mapsto \text{ } y \text{ } | x \in \{a, \dots ,z\}, y \in \{ASCII(a), \dots , ASCII(Z)\}$ 

We are technically done if we are fine with the output value that is in range of 97-122 and if our goal is simply have a value without a parituclar range.

Approach 3 based on Approach 2:

The question that we have now is $\textit{How to convert the values from a to 1 instead of a to 97}$. We need to make basic obervations here. 

1. We want $a\mapsto 1$, $b\mapsto 2$, ... $z \mapsto 26$. 
2. We have $a\mapsto 97$, $b\mapsto 98$, ... $z \mapsto 122$. 

The distance between $a\mapsto 1$ and $a\mapsto 97$ is 96, 97-1 = 96. Which means if we subtract each ASCII values with 96, we will able to normalize the values, which is 
$$h(x)=x-96 \text{ } | \text{ } x \in \{ASCII(a), \text{ } \dots, ASCII(z)\}, \text{ } y \in \{1,\dots,26}$$
lets try a few values. a, b, j, and z.
1. $h(ASCII(a)) = 97-96 = 1$
2. $h(ASCII(b)) = 98-96 = 2$
3. $h(ASCII(j)) = 106-96 = 10$
4. $h(ASCII(z)) = 122-96 = 26$

## Hashing Time Complexity

The time complexiy for a basic hash table is $O(1)$. Specifically, if we are using a $1:1$ mapping and we already know the size and all the values are unique without any collisions, then the time complexity will be $O(1)+\epsilon$. If we remove the overhead, it will be $O(1)$. However, if we are using other built in hashing structures and the size is unknown plus the values are not guaranteed to be unique ($1\mapsto \textit{ many})$ then the **amortized** time is $O(1)$.

## Easy Problems
1. How can we exchange values between two variables? For example, if ```a = 10``` and ```b = 20```, how can we exchange the value to ```a=20``` and ```b=10```?
2. Is there a better way to do (1)? 
3. Can you flip the vector or array? For example: ```1 2 3 4 5``` -> ```5 4 3 2 1```?
