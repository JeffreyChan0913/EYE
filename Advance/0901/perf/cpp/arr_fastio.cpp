#include <iostream>
using namespace std;
int a[10000000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("./num.in","r",stdin);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n;++i)cin>>a[i];	
	}
}
