#pragma gcc optimizer   ("O3")
#pragma gcc target      ("sse4")
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int t,n;
    double avg;
    cin>>t;
    while(t--){
        avg = 0;
        int a=0;
        cin>>n;
        double tn;
	for(int i=0;i<n;++i){	
            cin >> tn;
            avg += tn;
            a += (tn >= 90.00);
    }
        cout << avg / n << " " << a << "\n"; 
    }
}
