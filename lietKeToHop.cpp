#include<bits/stdc++.h>
using namespace std;

void kt(int a[], int n, int k){
	for(int i=1; i<=k; i++) a[i] = i;
}

void Th(int a[], int n, int k, int &flag){
	int i=k;
	while(i>=1 && a[i] == n-k+i) i--;
	if(i == 0) flag = 0;
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++) a[j] = a[j-1] + 1;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int flag = 1, a[1005];
		kt(a, n, k);
		while(flag){
			for(int i=1; i<=k; i++) cout << a[i]; cout << " ";
			Th(a, n, k, flag);
		}
		cout << endl;
	}
	return 0;
}
