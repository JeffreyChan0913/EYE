## Hashing

The idea of hashing is as follow: 

We want to use the least amount of time to access a particular element. For example, there is an event in your school, what it does is we layout 10,000 boxes on the hallway. The instruction states that, there are **TWO** blue keys inside two separated boxes within 3mins. What you need to do is you need to
find the two keys inorder to get \$100,000. Since there are too many boxes, they have labeled the boxes with a sequence of number. Say they started the first box from the left side of the hallway to the right with the sequence of 1 from the leftest box to the last box that has a number of 10,000.

Now, all of the people are attending the game and everyone is trying to search for the key which is going thru all the boxes from left to right. Well, there are 10,000 boxes which means each second you will have to open 55 boxes. However; you have a peice of insider information. They tell you
that, the blue key for your turn is going to be 31 and 8888. Since you already know the exact location of the box, you do not spend to much time of guessing where is the key in sequence. If both keys are towards the end of the hallway, you will never reach the tail. Patenly, you do need some
tricks. 

So the idea of hashing is, you need to define a set of rules to figure out something instantly. If you can pre define a rule that helps you to figure out the location in a split of a second, thats call hashing. If we think about the alphabet, what is the location of a? what is the location of z?
what is the location of j? One might need to sing the song from the beginning. As a result, lets look at the following.
```
value	: a b c d e f g h i j	k   l	m   n  o   p    q   r   s   t   u   v   w   x   y   z
position: 1 2 3 4 5 6 7 8 9 10	11  12  13  14 15  16	17	18	19	20	21	22	23	24	25	26
```

