#include<bits/stdc++.h>
using namespace std;
long long Mul(long long a, long long b, long long p){
	if(b==0) return 0;
	long long tmp = Mul(a, b/2, p);
	if(b%2==1) return (tmp*2+a)%p;
	return tmp*2%p;
}
long long Pow(long long x, long long y, long long p){
	if(y==0) return 1;
	if(y==1) return x;
	long long tmp1 = Pow(x, y/2, p);
	long long tmp2 = Mul(tmp1, tmp1, p);
	if(y%2==1) return tmp2*x % p;
	return tmp2 % p;
} 
int main(){
	int t; cin >> t;
	while(t--){
		long long x, y, p; cin >> x >> y >> p;
		cout << Pow(x, y, p) << endl;
	}
	return 0;
} 
