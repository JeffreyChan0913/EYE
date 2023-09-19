<h2 align="center">0922</h2>

## Some common **STL** functions that we should know by now

Our following example is the following starter code,
```cpp
 #pragma gcc optimizer   ("O3")
 #pragma gcc target      ("sse4")
 #include <bits/stdc++.h>
 #include <numeric>
 using namespace std;
 int main(){
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     const int n = 10;
     vector<int> v(n);
     int a[n];
     memset(a,0,4*n);
     iota(v.begin(),v.end(),1);
     iota(a,a+n,1);
 }
```

### Sort

```cpp
sort(a,a+n,greater<int>());
sort(v.begin(),v.end(),greater<int>());
```

The output is 
```10 9 8 7 6 5 4 3 2 1```

We can sort the array or vector with a particular range, $[1,5]$. 
```cpp
sort(a+1,a+6);
sort(v.begin()+1,v.begin()+6);
```

The output will become
```10 5 6 7 8 9 4 3 2 1```

### Find

```cpp
auto vit = find(v.begin(),v.end(),5);
cout << (vit == v.end() ? "not there\n" : "in v\n");
auto ait = find(a,a+n,5); 
cout << (ait == a+n ? "not there\n" : "in a\n");
```

The output looks like this
```
in v
in a
```

Another view of ```a```,```a+n```, ```v.begin()```, and ```v.end()```.
Remember, we have ```iota(a,a+n,1)``` that is fill a with 1 up to n.
```cpp
cout << a << " " << a+1 << " " << a+2 << " " << a+n-2 << " " << a+n-1 << "\n";
```

The output is
```
0x16d6c75c0 0x16d6c75c4 0x16d6c75c8 0x16d6c75e0 0x16d6c75e4
```

As we can see we can increment the array a and as you can see the address is incremented by 4 that is the size of an int. On top of that, we increment the pointer, however; how to actually print its values?

```cpp
cout << a << " " << a+1 << " " << a+2 << " " << a+n-2 << " " << a+n-1 << "\n";
cout << *(a) << " " << *(a+1) << " " << *(a+2) << " " << *(a+n-2) << " " << *(a+n-1) << "\n";
cout << *(v.begin()) << " " << *(v.begin()+1) << " " << *(v.begin()+2) << " " << *(v.end()-2) << " " << *(v.end()-1) << "\n";
```

The output is
```
1 2 3 9 10
1 2 3 9 10
```

### Distance
reference: ```1 2 3 4 5 6 7 8 9 10```

```cpp
cout << distance(a,find(a,a+n,6)) << "\n";
cout << distance(v.begin(), find(v.begin(),v.end(),6)) << "\n";
```

The output is
```
5
5
```

### Accumulate
```cpp
cout << "start of value as 0: " << accumulate(a,a+n,0) << ", start of value as 10: " << accumulate(a,a+n,10) << "\n";
cout << "start of value as 0: " << accumulate(v.begin(), v.end(),0) << ", start of value as 10: " << accumulate(v.begin(),v.end(),10) << "\n";
```

```
start of value as 0: 55, start of value as 10: 65
start of value as 0: 55, start of value as 10: 65
```

### Memset

```cpp
memset(a,0,4*n);
```


### Extra topic on **overloading**. 

```cpp
#pragma gcc optimizer   ("O3")
#pragma gcc target      ("sse4")
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
ostream & operator<<(ostream & o, vector<int> &d){
    if(d.size()){
        o<<d[0];
        for(int i=1;i<d.size();++i) o << " " << d[i];
        o << "\n";
    }
    else o << "Empty, nothing to print\n";
    return o;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    const int n = 10;
    vector<int> v(n);
    iota(v.begin(),v.end(),1);
    cout << v;
}
```

Output
```
1 2 3 4 5 6 7 8 9 10
```
### Problem 1
##### time limit per test case: 1 second 
Use the same constraint from the last problem to find the amount of unique values. 

Constrains: 
1. $1\leq a_i \leq 10^9$
2. $1\leq n \leq 200000$

testcase:
```
4
5
3 2 2 1 2 
3
1 1 2
7
3 3 3 0 0 9 9
9
1000000009 5 5 2 2 3 1000000009 100000009 2000000000 
```
Output:
```
3
2
3
6
```

<fodnt size = 1>Last Updated: 09-18-2023, 22:53:00 pm T5-6</font>
