#include<iostream>
using namespace std;
int check(long long n){
	while(n>=10){
		if(n%10!=n/10%10-1 && n%10!=n/10%10+1) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		cout << (check(n)?"YES":"NO") << endl;
	}
	return 0;
}
