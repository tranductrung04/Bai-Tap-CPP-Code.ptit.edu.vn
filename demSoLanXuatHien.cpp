#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		map<int, int> m;
		for(int &i : a){
			cin >> i; m[i]++;
		}
		if(m[x] == 0) cout << -1 << endl;
		else cout << m[x] << endl;
	}
	return 0;
}
