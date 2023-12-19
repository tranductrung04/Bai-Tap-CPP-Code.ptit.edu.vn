#include<bits/stdc++.h>
using namespace std;

void kt(int a[], int n){
	for(int i=1; i<=n; i++) a[i] = i;
}

void Hv(int a[], int n, int &flag){
	int i=n-1;
	while(i>=1 && a[i] > a[i+1]) i--;
	if(i == 0) flag = 0;
	else{
		int k = n;
		while(a[i] > a[k]) k--;
		swap(a[k], a[i]);
		int l = i+1, r = n;
		while(l <= r){
			swap(a[l], a[r]);
			l++; r--;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[1005], vs[1005];
		int flag = 1;
		kt(a, n);
		while(flag){
			for(int i=1; i<=n; i++) cout << a[i]; cout << " ";
			Hv(a, n, flag);	
		}
		cout << endl;
	}
	return 0;
}
