#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		long long cnt = 0;
		for(int &i : a) cin >> i;
		sort(a, a+n);
		for(int i=0; i<n; i++){
			int last = lower_bound(a+i+1, a+n, a[i]+k) - a - 1; 
			if(last > i) cnt += (last - i);
		}
		cout << (long long) cnt << endl;
	}
	return 0;
}
