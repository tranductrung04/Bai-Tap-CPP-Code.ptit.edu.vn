#include<iostream>
using namespace std;
long long gcd(long long a, long long b){
	while(b){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
long long lcm(long long a, long long b){
	return (a*b)/gcd(a, b);
}
int main(){
	int t; cin >> t;
	while(t--){
		long long a, b; cin >> a >> b;
		cout << lcm(a, b) << " " << gcd(a, b) << endl;	
	}
	return 0;
}
