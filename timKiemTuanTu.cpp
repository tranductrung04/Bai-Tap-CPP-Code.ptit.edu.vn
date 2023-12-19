#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int &i : a) cin >> i;
		int flag=0;
		for(int i=0; i<n; i++){
			if(a[i] == x) {cout << i + 1 << endl; flag=1; break;}
		}
		if(!flag) cout << -1 << endl;
	}
	return 0;
}
