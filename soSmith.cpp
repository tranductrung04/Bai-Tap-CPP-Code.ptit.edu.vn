#include<bits/stdc++.h>
using namespace std;

int p[1000000] = {0};
void sieve(){
	for(int i=0; i<=1000000; i++) p[i] = 1;
	p[0] = 0; p[1] = 0;
	for(int i=2; i<=1000; i++){
		for(int j=i*i; j<=1000000; j+=i) p[j] = 0;
	}
}
int sum1(int n){
	int res = 0;
	while(n){
		res += n%10;
		n/=10;
	}
	return res;
}
int sum2(int n){
	int res = 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			if(p[i]) res += sum1(i);
			n /= i; i=1;
		}
	}
	res += sum1(n);
	return res;
}

int main(){
	sieve();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(!p[n] && sum1(n) == sum2(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
