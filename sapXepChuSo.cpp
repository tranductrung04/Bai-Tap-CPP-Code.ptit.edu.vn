#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cin.ignore();
		string s; getline(cin, s);
		for(int i=0; i<s.size(); i++){
			if(s.find(" ") != string::npos){
				s.erase(s.find(" "), 1);
			}
		}
		set<char> c;
		for(int i=0; i<s.size(); i++){
			c.insert(s[i]);
		}
		for(char i : c) cout << i << " ";
		cout << endl;
	}
	return 0;
}
