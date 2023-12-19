#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	cin.ignore();
	map<string, int> a;
	while(n--){
		vector<string> b;
		string s; getline(cin, s);
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		stringstream ss(s);
		string token; s = "";
		while(ss >> token) b.push_back(token);
		s += b[b.size()-1];
		for(int i=0; i<b.size()-1; i++) s += b[i][0];
		a[s]++;
		if(a[s]>1) s += to_string(a[s]);
		s += "@ptit.edu.vn";
		cout << s << endl;
	}
	return 0;
}
