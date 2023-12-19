#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int Max = -1e9;
		for(int i=0; i<s.size(); i++)
			if(s[i]<'0' || s[i]>'9') s[i] = ' ';
		stringstream ss(s);
		string tmp;
		while(ss >> tmp) if(Max < stoi(tmp)) Max = stoi(tmp);
		cout << Max << endl;
	}
	return 0;
}
