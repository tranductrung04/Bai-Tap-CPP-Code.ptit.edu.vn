#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int max=-1e9, a[n];
		for(int &i : a) cin >> i;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++) if(max < (a[j]-a[i])) max=a[j]-a[i];
		}
		cout << max << endl;
	}
	return 0;
}
