#include <iostream>
using namespace std;
int main(){
	freopen("num.in","w",stdout);
	int t = 4;
	cout << t << "\n";
	int n = 10000000;
	for(int i=0; i<t;++i){
		cout << n << "\n";
		for(int i=0; i<n;++i) cout << i << " ";
		cout << "\n";
	}
}

