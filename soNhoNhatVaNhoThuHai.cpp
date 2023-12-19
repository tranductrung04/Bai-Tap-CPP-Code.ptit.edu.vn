#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		multiset<int> s;
		for(int i=0; i<n; i++){
			int tmp; cin >> tmp;
			s.insert(tmp);
		}
		auto it = min_element(s.begin(), s.end());
		int tmp=*it, cnt=0;
		while(*(it++)==tmp) cnt++;
		if(cnt==n || n==1 ) cout << -1 << endl;
		else {
			it = min_element(s.begin(), s.end());
			cout << *it << " ";
			it++; cout << *it << endl;
		}
	}
	return 0;
}
