#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		long long p1, p2 = LLONG_MIN;
		for(int i=0; i<n; i++){
			p1 = a[i];
			p2 = max(p2, p1);
			for(int j=i+1; j<n; j++){
				p1 *= (long long) a[j];
				p2 = max(p2, p1);
			}
		}
		cout << p2 << endl;
	}
	return 0;
}
