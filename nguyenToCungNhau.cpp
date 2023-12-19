#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
	for(int i=2; i<=sqrt(n); i++) if(n%i==0) return false;
	return n>1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		int t=0;
		for(int i=1; i<x; i++){
			if(__gcd(i, x)==1) t++;
		}
		if(prime(t)) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
