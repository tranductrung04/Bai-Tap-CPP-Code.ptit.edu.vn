#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n], b[m], max=-1e9, min=1e9;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i] > max) max=a[i]; 
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
			if(b[i] < min) min=b[i];
		}
		cout << (long long)max*min << endl;
	}
	return 0;
}
