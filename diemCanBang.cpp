#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], Fa[n]={0};
		for(int i=1; i<=n; i++){
			cin >> a[i];
			Fa[i] = Fa[i-1] + a[i];
		}
		int flag = 0;
		for(int i=1; i<=n; i++){
			if(Fa[i] == Fa[n] - Fa[i-1]){
				cout << i << endl; flag = 1; break;
			} 			
		}
		if(!flag) cout << -1 << endl;
	}
	return 0;
}
