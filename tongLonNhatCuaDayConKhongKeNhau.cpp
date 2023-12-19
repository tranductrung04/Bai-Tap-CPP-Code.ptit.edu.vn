#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n]; 
		long long b[n] = {0};
		for(int &i : a) cin >> i;
		b[0] = a[0];
		b[1] = max(a[0], a[1]);
		for(int i=2; i<n; i++){
			b[i] = max(b[i-1], (long long) b[i-2] + a[i]);
		}
		cout << b[n-1] << endl;
	}
	return 0;
}
