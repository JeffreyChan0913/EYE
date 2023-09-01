#include <iostream>
#include vector<int> a;
using namespace std;
vector<int> a(10000000);
int main(){
	freopen("./num.in","r",stdin);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n;++i)cin>>a[i];	
	}
}
