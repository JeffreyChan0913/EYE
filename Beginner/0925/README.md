<h2 align="center">0925 - Reordering</h2>
### How to put things in order
For example:
```
5 9 3 2 11
```
Output:
```
2 3 5 9 11
```
How can we do that?

First, assume we are referring to ascending order. A value by itself is already in order, so we dont have to do anything with it. However; when we have multiple values, it is unlikely it is not in order. 

That means, if we keep finding the smallest value out of the data sequence, and put it in the front, then we are able to reorder the entire data sequence.

Step 1: 
```
5 9 3 2 11
^ |->
```

The symbol ```^``` referring to fix this value, and ```\->``` referring to find the smallest value starting from this point. Then, once we are done, check if the smallest value beyond ```|->``` is smaller then ^. If true that means we should exchange position. 

Step 2:
```
2 9 3 5 11
  ^ |->
```
Repeat the same thing.
```
2 3 9 5 11
    ^ |->
```
Next,
```
2 3 5 9 11
      ^ |->
```
Last,
```
2 3 5 9 11
         ^  |-> 
```

Done.

Implement this concept... 

<font size = 1>Last Updated: 09-20-2023, 11:01:00 pm RC</font>
