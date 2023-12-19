#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	if(s[5] == s[6] && s[6] == s[7] && s[9] == s[10]) return true;
	if(s[5]<s[6] && s[6]<s[7] && s[9]<s[10]) return true;
	for(int i=5; i<s.size(); i++){
		if(i != 8){
			if(s[i] != '6' && s[i] != '8') return false;
		}
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
