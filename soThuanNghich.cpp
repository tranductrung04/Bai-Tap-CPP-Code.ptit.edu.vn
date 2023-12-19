#include<iostream>
using namespace std;
int check(long long n){
	long long m=n, x=0;
	while(n){
		x=x*10+n%10;
		n/=10;
	}
	return (x==m)?1:0;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		cout << ((check(n))?"YES":"NO") << endl;
	}
	return 0;
}
