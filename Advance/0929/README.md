<h2 align="center">0929</h2>

## Unordered strcutures

### Benefit
1. Fast
2. Really fast

### Disadvantage
1. allocate memory in real time
2. skewed data will take **O(n)** to search something

If you know the data is well balanced or the data set is small, one can use unordered data strcuture. Otherwise, it is safer to use regular strcuture like **map** or **set** where set has not been introduced yet. However; it will today.

## Set

Set is a list that contains multiple unique elements. 

$$ A = \{ x | P(x) \}$$

where P(x) is referring to the property of the set A that is the rules that define $x$.

For example:
$$ \{x | x \in \mathbb{Z}^+ \; and \; 1 \leq x \leq 3 \}$$

In another words, this is similar to a the keyboard problem that we store its location where all the values in the list is unique. Since wee only have 1 - 26, and we will not have any collision like the hashing issue that we have been talking about. 

Another example, we can create a set $A$ that takes our names as an element. $$A = \{ x | x \in \{ jeff, ernest, amogh \} \}$$

## The Structure Behind Set and Map
We already know that when we see unordered keyword, it has be to hashing and what kills the hashing is collision. If we have a list of elements, $$ n_1 , n_2 , \cdots , n_n$$ to find from the unordered structures, and assume the data is un balanced and it is high collided, then we must have $O(n^2)$ time complexity.

In this case, we will encorunter $O(n^2)$ time complexity and time limit exceed (TLE). To solve this problem, we can only apdate another structure like the regular map or set. 

The structure of map and set is Red Black Tree which is a self balancing tree. 

The rules are
1. we only have black and red nodes
2. root is always black
3. the node is red then it's children must be black.
4. every path form a node to a null pointer and must have the same number of black nodes.
5. we cant have double red 

To maintain the structure we will have the following rules
1. insert a node as red
2. if we have double red we need to do rotation (local)
3. if your sibling is red and we have double red, we turn the grand parent to black and mark both siblings in to black. 
4. if the sibling is not red and we have double red, then rotation is needed

<fodnt size = 1>Last Updated: 09-18-2023, 22:53:00 pm T5-6</font>
