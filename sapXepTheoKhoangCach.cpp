#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.first < b.first;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		pair<int, int> p[n];
		for(int &i : a) cin >> i;
		for(int i=0; i<n; i++)
			p[i] = make_pair(abs(x-a[i]), a[i]);
		stable_sort(p, p+n, cmp);
		for(int i=0; i<n; i++) cout << p[i].second << " ";
		cout << endl;
	}
	return 0;
}
