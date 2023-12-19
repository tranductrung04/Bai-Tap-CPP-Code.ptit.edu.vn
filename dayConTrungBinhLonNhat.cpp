#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<long long, int> a, pair<long long, int> b){
	return a.first > b.first;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		long long res = 0;
		pair<long long, int> p[n-k+1];
		for(int &i : a) cin >> i;
		for(int i=0; i<k; i++) res += (long long) a[i];
		p[0] = make_pair(res, k-1);
		int idx=1;
		for(int i=k; i<n; i++){
			res -= (long long) a[i-k];
			res += (long long) a[i];
			p[idx++] = make_pair(res, i);
		}
		sort(p, p+n-k+1, cmp);
		int first = p[0].second - k + 1, last = p[0].second;
		for(int i=first; i<=last; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
