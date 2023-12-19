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
		int n; cin >> n;
		long long result=1;
		for(long long i=2; i<=n; i++){
			result=lcm(result, i);
		}
		cout << result << endl;
	}
	return 0;
}
