#include<bits/stdc++.h>
using namespace std;
int main(){
	string name, email="";
	getline(cin, name);
	transform(name.begin(), name.end(), name.begin(), ::tolower);
	stringstream ss(name);
	string tmp, sur;
	while(ss >> tmp){
		email=tmp;
		sur+=tmp[0];
	}
	sur.erase(sur.size()-1);
	cout << email + sur + "@ptit.edu.vn";
	return 0;
}
