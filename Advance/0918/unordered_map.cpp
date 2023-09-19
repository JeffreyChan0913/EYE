#pragma gcc optimizer   ("O3")
#pragma gcc target      ("sse4")
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int ans=0, n;
	cin >> n;
	unordered_map<string,int> fm;
	string a;
	for(int i=0;i<n;++i){
		cin >> a;
		if(fm.find(a) == fm.end()) fm.insert({a,i});
		else ans++;
	}
	for(auto &[name,time] : fm) cout << name << " " << time << "\n";
	cout << "number of liars: " << ans << "\n";
}
