#include<bits/stdc++.h>
using namespace std;
int p[1000000];
void sieve(){
	p[1]=1;
	for(int i=2; i<=1000; i++){
		for(int j=i*i; j<=1000000; j+=i) if(!p[j]) p[j]=i;
	}
	for(int i=2; i<=1000000; i++) if(!p[i]) p[i]=i;
}
int main(){
	sieve();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=1; i<=n; i++) cout << p[i] << " ";
		cout << endl;
	}
	return 0;
}
