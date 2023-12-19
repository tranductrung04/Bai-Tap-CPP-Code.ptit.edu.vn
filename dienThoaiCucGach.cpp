#include<bits/stdc++.h>
using namespace std;

char number(char s){
	if(s == 'A' || s == 'B' || s == 'C') return '2';
	if(s == 'D' || s == 'E' || s == 'F') return '3';
	if(s == 'G' || s == 'H' || s == 'I') return '4';
	if(s == 'J' || s == 'K' || s == 'L') return '5';
	if(s == 'M' || s == 'N' || s == 'O') return '6';
	if(s == 'P' || s == 'Q' || s == 'R' || s == 'S') return '7';
	if(s == 'T' || s == 'U' || s == 'V') return '8';
	if(s == 'W' || s == 'X' || s == 'Y' || s == 'Z') return '9';
}
bool check(string s){
	int l=0, r=s.size()-1;
	while(l<r){
		if(s[l] != s[r]) return false;
		l++; r--;
	} 
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		string n = "";
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		for(int i=0; i<s.size(); i++) n.push_back(number(s[i]));
		if(check(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
