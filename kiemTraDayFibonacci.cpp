#include<bits/stdc++.h>
using namespace std;
int f[17]={};
bool check[1005]={};
void init(){
	f[0]=0; f[1]=1;
	check[f[0]]=1; check[f[1]]=1;
	for(int i=2; i<17; i++){
		f[i]=f[i-1]+f[i-2];
		check[f[i]]=1;
	}
}
int main(){
	int t; cin >> t;
	init();
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(check[a[i]]) cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
