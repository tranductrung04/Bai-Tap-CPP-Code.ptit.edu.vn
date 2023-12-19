#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		int cnt=0;
		cin.ignore();
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp) cnt++;
		cout << cnt << endl;
		}
	return 0;
}
