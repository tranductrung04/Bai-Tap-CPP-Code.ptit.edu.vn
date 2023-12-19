#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n][n], cnt=0, tmp[n*n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
			tmp[cnt++]=a[i][j];
		}
	}
	sort(tmp, tmp+cnt);
	cnt=0;
	int r1=0, r2=n-1, c1=0, c2=n-1;
	while(r1<=r2 && c1<=c2){
		for(int i=c1; i<=c2; i++) a[r1][i]=tmp[cnt++]; r1++;
		for(int i=r1; i<=r2; i++) a[i][c2]=tmp[cnt++]; c2--;
		if(r1<=r2) for(int i=c2; i>=c1; i--) a[r2][i]=tmp[cnt++]; r2--;
		if(c1<=c2) for(int i=r2; i>=r1; i--) a[i][c1]=tmp[cnt++]; c1++;
	}
 	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
