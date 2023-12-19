#include<bits/stdc++.h>
using namespace std;
bool prime(long long n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return n>1;
}
bool check(long long x){
	if(x/10%10 == x%10) return false;
	else if(x/10%10 < x%10){
		while(x>=10){
			if(x/10%10 >= x%10) return false;
			x/=10;
		}
		return true;
	}else {
		while(x>=10){
			if(x/10%10 <= x%10) return false;
			x/=10;
		}
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt=0;
		long long l=pow(10, n-1), r=pow(10, n)-1;
		long long i=l;
		while(i<r){
			if(check(i) && prime(i)) cnt++;
			i++;
		}
		cout << cnt << endl;
	}
	return 0;
}
