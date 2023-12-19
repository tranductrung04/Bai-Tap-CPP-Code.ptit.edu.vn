#include<bits/stdc++.h>
using namespace std;

long long Mul(long long a, long long b, long long c){
	if(b == 1) return a%c;
	if(a == 1) return b%c;
	if(a == 0 || b == 0) return 0;
	long long tmp = Mul(a, b/2, c);
	if(b % 2 == 0) return 2*tmp % c;
	else return (2*tmp+a) % c;
}

int main(){
	int t; cin >> t;
	while(t--){
		long long a, b, c; cin >> a >> b >> c;
		long long res = Mul(a, b, c);
		cout << res << endl;
	}
	return 0;
}
