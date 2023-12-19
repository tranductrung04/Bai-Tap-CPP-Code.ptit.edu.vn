#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		set<string> s;
		stringstream ss(s1);
		string token;
		while(ss >> token) if(s2.find(token) == string::npos) s.insert(token);
		for(auto it=s.begin(); it!=s.end(); it++) cout << *it << " ";
		cout << endl; 
	}
	return 0;
}
