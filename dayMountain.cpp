#include<bits/stdc++.h>
using namespace std;
bool check(int n, int l, int r, int a[]){
	for(int i=l+1; i<=r; i++){
		if(a[i]<a[i-1]){
			for(int j=i+1; j<=r; j++) if(a[j]>a[j-1]) return false;
		}
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, l, r; cin >>  n;
		int a[n];
		for(int i=0; i<n; i++) cin >> a[i];
		cin >> l >> r;
		if(check(n, l, r, a)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
