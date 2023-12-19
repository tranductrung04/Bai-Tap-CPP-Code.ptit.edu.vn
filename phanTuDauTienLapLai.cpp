#include<bits/stdc++.h>
using namespace std;
int find(int a[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[i] == a[j]) return a[i]; 
		}
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		cout << find(a, n) << endl;
	}
	return 0;
}
