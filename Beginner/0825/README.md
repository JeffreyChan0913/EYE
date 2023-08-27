<h2 align="center">0825 - Review</h2>

### Basic template to run a c++ code
```cpp
#include <iostream>
using namespace std;
int main(){
	cout << "Hello World\n";
}
```

1. ```#include <iostream>```: This is how we include a particular tool to our code.
2. ```using namespace std;```: when we use most of the functions or methods, we will need to type ```std::``` infront of a particular functions or methods, to alleviate the amount of typing, we use this line of code to tell the computer that, if a particular functions or methods is used, you will help me to include ```std::``` in front of it. 
3. ```int main() { ... } ```: this is where we start our code. 
4. ```cout << ```: is basically putting what ever after ```<<``` into the buffer, so the computer will get what ever in the buffer and put it to the screen.
5. ```"Hello World\n"```: this is a string. To identify a string, we use ```"```. So if something is being sandwhiched with a```"```, that is a string. As for ```\n```, it is saying print a newline after ```Hello World```.

### Variable
1. ```int``` or ```int32_t```: int is used when we have a whole number with the following range ```-2147483648 ... -2 -1 0 1 2 3 ...  2147483647$. By default, int has 32 bits which is $-2^{31} \dots 0 \dots 2^{31}-1$.
2. ```int64_t``` or ```long long```: it has a larger range compared to int, so the range is ```-2^{63} \dots 0 \dots 2^{63}-1```
3. ```double```: we use double to represent something that is in decimal. If we have a large / long decimal numbers, we will have accuracy errors. We will be fine to represent an integer whose absolute value is at most $2^{53}$.  
4. ```string```: We can store anything in to string entailing white spaces. 
5. ```char```: this is what we use to store one letter, for example: ```A```, ```!```, ```=```,```1```, and so on.

To define a variable, we will use the following template: ```const_or_not_const variable_type variable_name = some_value```

### Input
we use ```cin >> variable``` to get input and store it to variable.
```cpp
#include <iostream>
using namespace std;
int main(){
	int age;
	cout << "Input your age ";
	cin >> age;
	cout << "\nYour age is " << age << "\n";
}
```

### Math / Arithemtic operators 

1.```+``` : addition

2.```-```: subtraction

3.```*``` : multiplicaton

4.```/```: division

5.```( )``` : parenthesis 

6.```++``` : increment by 1

7.```--``` : decrement by 1

8.```%``` : modulus, returns the division remainder

9.```x+=1```: is the same as ```x = x + 1```

10.```x-=1```: is the same as ```x = x - 1```
### Loop

We have two major types of loops. 
1. for loop
2. while loop

Unlike while loop, We use for loop when we know when we will stop. They do follow 1 rule with 3 components, starting point, stopping point and the update.

For loop template: 

Vector use 0 index. So if we have 
```
value	: 10 20 30 40 50
position: 0  1  2  3  4
```

We do have the following functions that we can use on vector.
1. ```vector_name.size()```: tell us how many elements in the vector
2. ```vector_name.front()```: tell us what is the first value
3. ```vector_name.back()```: tell us what is the last element
4. ```vector_name[position]```: we can retrieve the a value at position from vector_name. This square bracket method will not cehck the bound for us. so we need to know what we are doing.
5. ```vector_name.at(position)```: same as 4, however, it will check if the given position is in bound or not. For example, if we have 5 elements in a vector v, ```v.at(100)``` will give us an error.

To define a vector we will use the following template: ```vector<data_type> vector_name_aka_variable_name;

```cpp
#include <vector> //Allow us to use vector in our code
#include <iostream>
int main(){
	vector<int> v(10); //we define a vector with 10 elements in it. by default everything is 0. so we have 0 0 0 0 0 0 0 0 0 0 in v now.
	vector<int> v1(5,1); // if we define v1 as (5,1), it is saying, we define v1 with 5 elements in it and all that 5 elements are 1. So we have 1 1 1 1 1 in v1 now.
	cout << v1.size() << "\n"; // this will print out 5 since we have 5 elements
	cout << v1.front() << "\n"; // this will print 1.
	cout << v1.back() << "\n"; // this will print 1 as well.
	cout << v1[4] << "\n"; // this will print 1 as well.
	cout << ++v1[4] << "\n"; //this will increment the element at position 4 by 1 so we will print 2. in v1 we have 1 1 1 1 2
	cout << v1[4]+v1[1] << "\n"; //this will add the element at position 4 and position 1 which is 3. because v1 is 1 1 1 1 2.
}
```

What should we do if we would like to print a vector? First we need to know where would we like to start and stop. Since we want to print the entire vector and the index is starting from 0 upto the amount of elements, we can stop at ```vector_name.size()```.

```cpp
#include <iostream>
#include <vector>
int main(){
	vector<int> v(5,2);//define a vector with five elments in it with five 2s.
	for(int i=0; i<v.size();++i) cout << v[i] << " ";
	cout << "\n";
}
```

We can do it with another type of loop (more advance and simpler way). 
```cpp
#include <iostream>
#include <vector>
int main(){
	vector<int> v(5,2);//define a vector with five elments in it with five 2s.
	for(auto &x:v) cout << x << " "; //this is the same with the following python code: for i in list_v:
	cout << "\n";
}
```

<font size = 1>Last Updated: 08-26-2023, 12:53:00 pm RC</font>
