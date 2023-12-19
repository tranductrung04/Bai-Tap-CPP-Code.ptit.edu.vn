#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, cnt=0; cin >> n;
		vector<int> v[n];
		set<int> s;
		map<int, int> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				int tmp; cin >> tmp;
				v[i].push_back(tmp);
				if(i==0) s.insert(tmp);
			}
		}
		set<int> se;
		for(int i=1; i<n; i++){
			for(int j=0; j<n; j++) se.insert(v[i][j]);
			for(auto it=s.begin(); it!=s.end(); it++){
				if(se.count(*it)==0) m[*it]=1;
			}
			se.clear();
		}
		for(auto i=s.begin(); i!=s.end(); i++) if(m[*i]==0) cnt++;
		cout << cnt << endl;
	}
	return 0;
}
