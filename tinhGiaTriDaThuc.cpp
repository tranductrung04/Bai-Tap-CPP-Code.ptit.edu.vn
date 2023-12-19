#include<bits/stdc++.h>
using namespace std;

long long p=1e9+7;

long long Mul(long long x, long long y){
	if(x==0) return 0;
	if(y==0) return 0;
	long long tmp=Mul(x, y/2);
	if(y%2==0) return tmp*2%p;
	else return (tmp*2+x)%p;
}
long long Pow(long long x, long long y){
	if(y==0) return 1;
	if(y==1) return x%p;
	long long tmp1=Pow(x, y/2);
	long long tmp2=Mul(tmp1, tmp1);
	if(y%2==0) return tmp2%p;
	else return tmp2*x%p;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n, x; cin >> n >> x;
		long long a[n];
		for(long long &i : a) cin >> i;
		long long result=0, y=n-1;
		for(int i=0; i<n; i++){
			result += Mul(a[i], Pow(x, y--));
		}
		cout << result%p << endl;
	}
	return 0;
}
