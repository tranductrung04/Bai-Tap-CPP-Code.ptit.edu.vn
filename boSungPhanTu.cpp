#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt=0;
		set<int> s;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			s.insert(x);
		}
		cout << *max_element(s.begin(), s.end()) - *min_element(s.begin(), s.end()) - (s.size()-2) - 1 << endl;
	}
	return 0;
}
