#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set<int> s;
		for(int i=0; i<n-1; i++){
			int tmp; cin >> tmp;
			s.insert(tmp);
		}
		for(int i=1; i<=n; i++){
			if(s.count(i) == 0){ cout << i << endl; break;}
		}
	}
	return 0;
}
