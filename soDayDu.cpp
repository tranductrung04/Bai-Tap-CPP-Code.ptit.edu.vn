#include<bits/stdc++.h>
using namespace std;

int check(string s, set<char> se){
	if(s[0] == '0') return -1;
	for(auto it=se.rbegin(); it!=se.rend(); it++){
		if((*it)<'0' || (*it)>'9') return -1;
	}
	for(char i='0'; i<='9'; i++) if(se.count(i) == 0) return 0;
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		set<char> se;
		for(int i=0; i<s.size(); i++) se.insert(s[i]);
		if(check(s, se) == 1) cout << "YES" << endl;
		else if(check(s, se) == 0) cout << "NO" << endl;
		else cout << "INVALID" << endl;
	}
	return 0;
}
