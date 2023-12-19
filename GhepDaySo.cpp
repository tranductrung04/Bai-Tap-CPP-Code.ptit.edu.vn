#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> k >> n;
		multiset<int> s;
		for(int i=0; i<k; i++){
			for(int j=0; j<n; j++){
				int x; cin >> x;
				s.insert(x);
			}
		}
		for(int i : s) cout << i << " ";
		cout << endl;
	}
	return 0;
}
