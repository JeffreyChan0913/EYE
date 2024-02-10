<h2 align="center">Flip the array</h2>

### Problem description
Given an array $A$ = [1,2,3,4,5] you need to reverse the array to $A$ = [5,4,3,2,1].

### Part 2
After reversing the array, what we want to do is applying another technique to solve the problem. In real life, say, we have two hands and often time we only use one of your hand to work on certain things, while the other one will be at idle. As a result, thing wont move together. 

In most cases, we use i to go from left to right, and to swap the last element we often time use size - i - 1. Well that would work in some cases; however, if we think about the hand example from above, the value of i and size - i - 1 wont be the same in some problems, so to solve this issue, we simply create a variable that does not depends on i and set that variable to the size - 1 and decrement it each time. That would able to solve the problem basically the same way most of you proposed.  
<font size = 1>Last Updated: 02-09-2024, 16:41:00pm DIY</font>
