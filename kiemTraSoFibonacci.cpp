#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
	if(n==0) return true;
	long long f1=0, f2=1, fn=f1+f2;
	while(fn<=n){
		if(n==fn) return true;
		fn=f1+f2;
		f1=f2; f2=fn;
	}
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		cout << (check(n)?"YES":"NO") << endl;
	}
	return 0;
}
