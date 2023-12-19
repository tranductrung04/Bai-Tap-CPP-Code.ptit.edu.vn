#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		int min=1e9, n1, n2;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(abs(a[i]+a[j]) < min){
					min = abs(a[i]+a[j]); n1=a[i]; n2=a[j];
				}
			}
		}
		cout << n1+n2 << endl;
	}
	return 0;
}
