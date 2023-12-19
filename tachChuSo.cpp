#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int sum = 0;
		multiset<char> se;
		for(int i=0; i<s.size(); i++){
			if(s[i]<'0' || s[i]>'9') se.insert(s[i]);
			else sum += s[i] - '0';
		}
		for(auto it : se) cout << it;
		cout << sum << endl;
	}	
	return 0;
}
