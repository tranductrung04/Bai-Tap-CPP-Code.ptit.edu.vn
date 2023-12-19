#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	string tmp1 = to_string(a) + to_string(b);
	string tmp2 = to_string(b) + to_string(a);
	return tmp1 > tmp2;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		sort(a, a+n, cmp);
		for(int i : a) cout << i;
		cout << endl;
	}
	return 0;
}
