#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n], flag = 0;
		for(int &i : a) cin >> i;
		sort(a, a+n);
		for(int i=0; i<n; i++){
			int tmp = a[i] + x;
			int pos = lower_bound(a, a+n, tmp) - a;
			if(a[pos] == tmp) {
				cout << 1 << endl;
				flag = 1;
				break;	
			}
		}
		if(!flag) cout << -1 << endl;
	}
	return 0;
}
