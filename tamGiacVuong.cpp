#include<bits/stdc++.h>
using namespace std;

bool check(vector<long long> v){
	for(int i=v.size()-1; i>=2; i--){
		int l=0, r=i-1;
		while(l<r){
			if(v[l] + v[r] == v[i]) return true;
			else if(v[l] + v[r] < v[i]) l++;
			else r--;
		}
	}
	return false;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		vector<long long> v;
		for(int i=0; i<n; i++){
			cin >> a[i];
			v.push_back((long long) a[i]*a[i]);
		}
		sort(v.begin(), v.end());
		if(check(v)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
