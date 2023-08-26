# Performance Test for CPP C-Style Array vs C++ STL Vector

### C-Style Array 
Unlike vector, the size of the array is fixed. Perhaps, the key word here is **fixed**. Before we know how vectory works, we need to know, briefly, how a basic C-Style array operates. 

Reference(1) - Scroll down to page 41 [link](https://ocw.mit.edu/courses/6-s096-introduction-to-c-and-c-january-iap-2013/bba9056d5290198d563edc47dfcff0e9_MIT6_S096_IAP13_lec3.pdf)
Reference(2) - Scroll to Dynamically Allocated Array [link](https://www.cs.swarthmore.edu/~newhall/unixhelp/C_arrays.html#:~:text=dynamically%20allocated%20arrays&text=To%20dynamically%20allocate%20space%2C%20use,space%20of%20the%20passed%20size.)

Since the size of the C-Style array is fixed and you are not suppose to change the size at run time, as a result, we do not have to care about adding new elements into the array with sizing issue.

### Vector 

When we are using```push_back```, when the new size is greater than the capacity, you will trigger a reallocation procedure at run time. Once we have properly allocate a new memory space, we will have to copy all the old values from the old array into the newly created array. Usually the size will be increased by a factor of 2. So the operation of push_back in the worst case is ```O(n)```.

Reference(3) - Read the entire page [link](https://cplusplus.com/reference/vector/vector/push_back/)

