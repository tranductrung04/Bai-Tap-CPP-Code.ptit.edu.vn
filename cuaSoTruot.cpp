#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++) cin >> a[i][j];
	int m; cin >> m;
	int b[m][m], idx = 0;
	for(int i=0; i<m; i++)
		for(int j=0; j<m; j++) cin >> b[i][j];
	for(int i=0; i<n; i++){
		int tmp = i;
		if(i % m == 0){
			for(int j=0; j<n; j++){
				if(j % m == 0) idx = 0;
				else idx++;
				for(int k=0; k<m; k++){
					a[tmp++][j] *= b[k][idx];
				}
				tmp = i;
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
