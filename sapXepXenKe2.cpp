#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for(int &i : a) cin >> i;
		sort(a, a+n, greater<int>());
		int l = 0, r = n-1;
		for(int i=0; i<n; i++)
			if(i%2 == 0) b[i] = a[l++];
			else b[i] = a[r--];
		for(int i : b) cout << i << " ";
		cout << endl;
	}
	return 0;
}
