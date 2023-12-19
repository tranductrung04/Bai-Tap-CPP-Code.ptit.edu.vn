#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<long long> v;
		int cnt=0;
		for(int i=0; i<n; i++){
			long long x; cin >> x;
			if(x != 0) v.push_back(x);
			else cnt++;
		}
		for(long long i : v) cout << i << " ";
		for(int i=0; i<cnt; i++) cout << 0 << " ";
		cout << endl;		
	}
	return 0;
}
