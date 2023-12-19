#include<bits/stdc++.h>
using namespace std;
long long __lcm(int x, int y){
	return (long long) x*y/__gcd(x, y);
}
long long solve(int x, int y, int z, int n){
	long long tmp = __lcm(__lcm(y, z), x);
	int cnt = to_string(tmp).size();
	if(cnt > n) return -1;
	if(cnt == n) return tmp;
	long long d=pow(10, n-1)/tmp;
	while(cnt != n){
		cnt=to_string(tmp*d).size(); d++;
	}
	return tmp*(d-1);
}
int main(){
	int t; cin >> t;
	while(t--){
		int x, y, z, n;
		cin >> x >> y >> z >> n;
		cout << solve(x, y, z, n) << endl;
	}
	return 0;
}
