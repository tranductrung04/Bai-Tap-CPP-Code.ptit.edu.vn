#include<bits/stdc++.h>
using namespace std;
int p[1000000]={};
void sieve(){
	p[0]=1; p[1]=1;
	for(int i=2; i<=1000; i++){
		for(int j=i*i; j<=1000000; j+=i) p[j]=1;
	}
}
int main(){
	sieve();
	int t; cin >> t;
	while(t--){
		int l, r; cin >> l >> r;
		int cnt=0;
		for(int i=l; i<=r; i++) if(!p[i]) cnt++;
		cout << cnt << endl;
	}
	return 0;
}
