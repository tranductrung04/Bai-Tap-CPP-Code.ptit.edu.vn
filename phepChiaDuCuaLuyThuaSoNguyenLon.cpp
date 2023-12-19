#include<bits/stdc++.h>
using namespace std;

long long remainder(string a, long long m){
	long long tmp = (a[0]-'0') % m;
	for(int i=1; i<a.size(); i++){
		tmp = tmp*10 + a[i]-'0';
		tmp %= m;
	}
	return tmp;
}
long long Mul(long long a, long long b, long long m){
	if(b == 0) return 0;
	long long tmp = a * (b/2);
	if(b % 2 == 0) return 2*tmp%m;
	else return (2*tmp+a) %m;
}
long long Pow(long long a, long long b, long long m){
	if(b == 0) return 1;
	if(b == 1) return a%m;
	long long tmp1 = Pow(a, b/2, m);
	long long tmp2 = Mul(tmp1, tmp1, m);
	if(b % 2 == 0) return tmp2 % m;
	else return (tmp2 * a) % m;
}
long long find_k(string a, long long b, long long m){
	long long r = remainder(a, m);
	return Pow(r, b, m);
}
int main(){
	int t; cin >> t;
	while(t--){
		string a; cin >> a;
		long long b, m; cin >> b >> m;
		cout << find_k(a, b, m) << endl;
	}	
	return 0;
}
