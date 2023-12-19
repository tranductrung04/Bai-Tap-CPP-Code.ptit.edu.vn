#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vector<int> v[n];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				int tmp; cin >> tmp;
				v[i].push_back(tmp);
			}
		}
		int r1=0, r2=n-1, c1=0, c2=m-1;
		while(r1<=r2 && c1<=c2){
			for(int i=c1; i<=c2; i++) cout << v[r1][i] << " "; r1++;
			for(int i=r1; i<=r2; i++) cout << v[i][c2] << " "; c2--;
			if(r1<=r2) for(int i=c2; i>=c1; i--) cout << v[r2][i] << " "; r2--;
			if(c1<=c2) for(int i=r2; i>=r1; i--) cout << v[i][c1] << " "; c1++;
		}
		cout << endl;
	}
	return 0;
}
