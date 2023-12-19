#include<bits/stdc++.h>
using namespace std;

void out(int a[], int n){
	for(int i=1; i<=n; i++) cout << a[i] << " ";
	cout << endl;
}
void gen(int a[], int n){
	int i=n-1;
	while(i>0 && a[i]<a[i+1]) i--;
	if(i==0){
		int k=1;
		for(int j=n; j>=1; j--) a[k++]=j;
	}else {
		int l=i+1, r=n;
		while(l<r){
			swap(a[l], a[r]);
			l++; r--;
		}
		swap(a[i], a[n]);
	}
	out(a, n);
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[1005];
		for(int i=1; i<=n; i++) cin >> a[i];
		gen(a, n);
	}
	return 0;
}
