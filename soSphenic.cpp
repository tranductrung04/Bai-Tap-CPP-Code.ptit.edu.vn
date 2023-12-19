#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	multiset<int> a;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			if(a.count(i)) return false;
			a.insert(i); n/=i; i=1;
		}
	}
	if(a.count(n)) return false;
	a.insert(n);
	return a.size()==3;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << (check(n)?1:0) << endl;
	}
	return 0;
}
