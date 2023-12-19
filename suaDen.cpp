#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, b; cin >> n >> k >> b;
	set<int> a;
	for(int i=0; i<b; i++){
		int tmp; cin >> tmp;
		a.insert(tmp-1);
	}
	int res = 0, cnt = 0;
	for(int i=0; i<k; i++){
		if(!a.count(i)) cnt++;
	}
	res = cnt;
	for(int i=k; i<n; i++){
		if(!a.count(i-k)) cnt--;
		if(!a.count(i)) cnt++;
		res = max(res, cnt);
	}
	cout << k - res << endl;
	return 0;
}
