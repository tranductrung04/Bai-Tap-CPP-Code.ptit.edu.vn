#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		long long b[n];
		for(int &i : a) cin >> i;
		b[0] = (long long) a[0] * a[1];
		b[n-1] = (long long) a[n-1] * a[n-2];
		for(int i=1; i<n-1; i++) b[i] = (long long) a[i-1] * a[i+1];
		for(long long i : b) cout << i << " ";
		cout << endl;
	}
	return 0;
}
