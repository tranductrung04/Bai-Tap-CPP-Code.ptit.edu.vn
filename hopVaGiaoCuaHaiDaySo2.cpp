#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		set<int> a, b, u, inter;
		for(int i=0; i<n; i++){
			int tmp; cin >> tmp;
			a.insert(tmp);
			u.insert(tmp);
		}
		for(int i=0; i<m; i++){
			int temp; cin >> temp;
			b.insert(temp);
			u.insert(temp);
			if(a.count(temp)) inter.insert(temp);
		}
		for(auto it=u.begin(); it!=u.end(); it++) cout << *it << " ";
		cout << endl;
		for(auto it=inter.begin(); it!=inter.end(); it++) cout << *it << " ";
		cout << endl;
	}
	return 0;
}
