#include<iostream>
using namespace std;
void input(int a[][50], int n, int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) cin >> a[i][j];
	}
}
void output(int a[][50], int n, int m){
	for(int i=0; i<n ;i++){
		for(int j=0; j<m; j++) cout << a[i][j] << " ";
		cout << endl;
	}
}
void multiple(int a[][50], int b[][50], int r[][50], int n, int m, int p){
	for(int i=0; i<n; i++){
		for(int k=0; k<p; k++){
			for(int j=0; j<m; j++){
				r[i][k]+=a[i][j]*b[j][k];
			}
		}
	}	
}
int main(){
	int n, m, p; cin >> n >> m >> p;
	int a[50][50], b[50][50], r[50][50]={};
	input(a, n, m);
	input(b, m, p);
	multiple(a, b, r, n, m, p);
	output(r, n, p);
	return 0;
}
