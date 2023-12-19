#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n], cnt=0;
		for(int &i : a) cin >> i;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(a[j]+a[i]==k) cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
