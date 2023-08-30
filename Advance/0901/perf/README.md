# Performance Test for CPP C-Style Array vs C++ STL Vector

Initially, you'll require a Linux machine with specific packages installed to execute the code. Consequently, instructions on running the code will not be furnished, as they could complicate matters, and configuring the environment might lead to potential issues.

### C-Style Array 
Unlike vector, the size of the array is fixed. Perhaps, the key word here is **fixed**. Before we know how vectory works, we need to know, briefly, how a basic C-Style array operates. 

Reference(1) - Scroll down to page 41 [link](https://ocw.mit.edu/courses/6-s096-introduction-to-c-and-c-january-iap-2013/bba9056d5290198d563edc47dfcff0e9_MIT6_S096_IAP13_lec3.pdf)
Reference(2) - Scroll to Dynamically Allocated Array [link](https://www.cs.swarthmore.edu/~newhall/unixhelp/C_arrays.html#:~:text=dynamically%20allocated%20arrays&text=To%20dynamically%20allocate%20space%2C%20use,space%20of%20the%20passed%20size.)

Since the size of the C-Style array is fixed and you are not suppose to change the size at run time, as a result, we do not have to care about adding new elements into the array with sizing issue.

At a high level, when we declare an array, we need to know the size in advance. Moreover, once we know the amount of elements, $n, n \in \mathbb{Z}^+$, we simply allocate the memory from the computer with a size n. 

```c
	const int n = 10;
	int *array = (int*)malloc(n*sizeof(int));
	for(int i=0; i<n;++i) array[i] = i;
	free(array);
```

If we need a bigger size, we need to expand it. 

```c
	const int n = 10; //set size to 10.
	int *array = (int*)malloc(n*sizeof(int)); // allocate memory.
	for(int i=0; i<n;++i) array[i] = 0; // initailize the array with zeros.
	const int new_size = 30;//create new size.
	int *temp = (int*)malloc(new_size*sizeof(int)); // allocate the memory with new size.
	for(int i=0; i<new_size;++i) temp[i] = (i<n ? array[i] : 0); // copy data from old array, and then set everything else to 0.
	free(array); //remove what we have allocated to prevent memory leak.
	array = temp; //point array back to temp.
	temp = null; //set temp to null pointer.
	free(temp); //remove temp since we are done with temp.
```

### Vector 

When we are using ```push_back``` and the new size is greater than the capacity, you will trigger a reallocation procedure during run time. Once we have properly allocated a new memory space, we will have to copy all values from the old array to the newly created array. The size is usually increased
by a factor of 2. So the operation of ```push_back``` in the worst case is ```O(n)```. After going through the C-Style array, we can see that we are basically repeating ourselves. C++ simply combine all the necessary procedures together in a big piece of code. That's why pre allocating the vector
up to the specification will save you some time. It won't be a lot if the size is relatively small, however, if the size is sufficiently large, the impact will be severly preposterous.

As a result, the adriot a data structure is, the move unscrupulous it is. So, no free lunch. 

Reference(3) - Read the entire page [link](https://cplusplus.com/reference/vector/vector/push_back/)

