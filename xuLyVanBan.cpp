#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<string> v;
	string s;
	while(cin >> s){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		char tmp = s[s.size()-1];
		v.push_back(s);
		if(tmp == '.' || tmp == '!' || tmp == '?'){
			v[0][0] = toupper(v[0][0]);
			v[v.size()-1].erase(s.size()-1);
			for(string i : v) cout << i << " ";
			cout << endl;
			v.clear();
		}
	}
	return 0;
}
