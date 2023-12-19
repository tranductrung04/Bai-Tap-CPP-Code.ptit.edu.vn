#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set<long long> v;
		for(int i=0; i<n; i++){
			long long x; cin >> x;
			v.insert(x);
		}
		for(int i=0; i<n; i++){
			if(v.count(i) != 0) cout << i << " ";
			else cout << -1 << " ";
		}
		cout << endl;
	}
	return 0;
}
