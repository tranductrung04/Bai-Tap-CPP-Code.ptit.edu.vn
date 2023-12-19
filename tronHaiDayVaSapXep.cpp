#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		multiset<int> s;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			s.insert(x);
		}
		for(int i=0; i<m; i++){
			int x; cin >> x;
			s.insert(x);
		}
		for(int i : s) cout << i << " ";
		cout << endl;
	}
	return 0;
}
