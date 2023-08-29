## Hashing

The idea of hashing is as follow: 

We want to use the least amount of time to access a particular element. For example, there is an event in your school, what it does is we layout 10,000 boxes on the hallway. The instruction states that, there are **TWO** blue keys inside two separated boxes and within three mins, you will need to
find the two keys inorder to win \$100,000. 


Now, all of the people are attending the game and everyone is trying to search for the keys by going thru all the boxes from the left to the right. Well, there are 10,000 boxes which means each second you will have to check 55 boxes. However; you have a peice of insider information. The indsider
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

Approach 1:

Physically add all the lower case alphabets a to z into the array. When we want the location, we just search it and retrieve its index that has to be our value. 

So our function is : $h(x) \mapsto \text{ }  y \text{ }  | x \in \text{alphabet}, y \in \{1,\dots,26\}$ 

Approach 2: 

We use ASCII code as our index which is starting from 97 (a) to 122 (z).

hash function: $h(x) \mapsto \; y \; | x \in \{a, \dots ,z\}, y \in \{ASCII(a), \dots , ASCII(Z)\}$ 
