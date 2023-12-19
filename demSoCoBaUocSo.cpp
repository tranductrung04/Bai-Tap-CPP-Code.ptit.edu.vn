#include<bits/stdc++.h>
using namespace std;
int p[1000000];
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
		long long n; cin >> n;
		int i=2;		
		long long cnt=0, tmp=pow(i, 2);
		while(tmp <= n){
			if(!p[i]) cnt++;
			i++; tmp=pow(i, 2);
		}
		cout << cnt << endl;
	}
	return 0;
}
