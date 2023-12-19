#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0 ) return false;
	}
	return true;
}
bool solve(long long n){
	if(n == 1) return true;
	for(int i=2; i<=32; i++) 
		if(check(i)){
			long long tmp1 = pow(2, i) - 1, tmp2 = pow(2, i-1);
			if(check(tmp1) && n == (long long)tmp1 * tmp2) return true;
		}	 
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		if(solve(n)) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
