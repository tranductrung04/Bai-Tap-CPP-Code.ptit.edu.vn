#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	int n=0, odd=0, even=0;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		n++;
		if(stoi(tmp)%2==0) even++;
		else odd++;
	}
	if(n%2==0){
		if(even > odd) return true;
		else return false;
	}
	else if(odd > even) return true;
	else return false;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		cout << ((check(s))?"YES":"NO") << endl;
	}
	return 0;
}
