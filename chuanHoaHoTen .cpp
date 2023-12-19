#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int ch; cin >> ch;
		cin.ignore();
		string s; getline(cin, s);
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		stringstream ss(s);
		string token;
		vector<string> v;
		if(ch == 1){
			while(ss >> token){
				token[0] = toupper(token[0]);
				v.push_back(token);
			}
			cout << v[v.size()-1] << " ";
			for(int i=0; i<v.size()-1; i++) cout << v[i] << " ";
			cout << endl;
		}else{
			while(ss >> token){
				token[0] = toupper(token[0]);
				v.push_back(token);
			}
			for(int i=1; i<v.size(); i++) cout << v[i] << " ";
			cout << v[0] << endl;			
		}
	}
	return 0;
}
