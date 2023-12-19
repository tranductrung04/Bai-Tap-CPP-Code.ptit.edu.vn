#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k, x; cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		cin >> k >> x;
		int pos = lower_bound(a, a+n, x) - a;
		int l=pos-k/2, r=pos+k/2;
		for(int i=l; i<pos; i++){
			if(i >= 0) cout << a[i] << " ";
			else cout << 0 << " ";
		}
		for(int i=pos+1; i<=r; i++){
			if(i < n) cout << a[i] << " ";
			else cout << 0 << " ";
		}
		cout << endl;
	}
	return 0;
}
