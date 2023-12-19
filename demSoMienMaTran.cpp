#include<bits/stdc++.h>
using namespace std;
void check(int a[][100], int m, int n, int x, int y){
	int dx[8]={-1, -1, -1, 0, 0, 1, 1, 1};
	int dy[8]={-1, 0, 1, -1, 1, -1, 0, 1};
	a[x][y]=0;
	for(int k=0; k<8; k++){
		int i1=x+dx[k], j1=y+dy[k];
		if(i1>=0 && i1<n && j1>=0 && j1<m){
			if(a[i1][j1]==1) check(a, m, n, i1, j1);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[100][100];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int cnt=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(a[i][j]==1) {
					cnt++;
					check(a, m, n, i, j);
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
