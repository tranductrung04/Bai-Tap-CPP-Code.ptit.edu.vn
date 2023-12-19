#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string n; cin >> n;
		long long m; cin >> m;
		long long k;
		long long tmp = n[0]-'0';
		for(int i=1; i<n.size(); i++){
			tmp %= m;
			tmp = tmp*10 + n[i]-'0';
		}
		k = tmp % m;
		cout << k << endl;
	}
	return 0;
}
