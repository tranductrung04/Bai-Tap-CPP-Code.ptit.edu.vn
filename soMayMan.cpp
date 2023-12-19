#include<bits/stdc++.h>
using namespace std;

int sumDigit(int a){
	int sum = 0;
	while(a){
		sum += a%10;
		a /= 10;
	}
	return sum;
}
bool check(int a){
	if(a > 9)
		if(check(sumDigit(a))) return true;
	return a == 9;
}
int main(){
	int t; cin >> t;
	while(t--){
		string n; cin >> n;
		int sum = 0;
		for(int i=0; i<n.size(); i++) sum += n[i] - '0';
		if(check(sum)) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
