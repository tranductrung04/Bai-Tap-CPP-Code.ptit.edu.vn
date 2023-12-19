#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	if(s.size() == 1) return false;
	int l=0, r=s.size()-1;
	while(l<r){
		if(s[l] != s[r]) return false;
		l++; r--;
	}
	return true;
}
bool cmp(string a, string b){
	if(a.size() != b.size())
		return a.size() > b.size();
	return a > b;
}
int main(){
	string s;
	map<string, int> m;
	vector<string> v;
	while(cin >> s){
		if(check(s)) {
			m[s]++;
			v.push_back(s);	
		}
	}
	sort(v.begin(), v.end(), cmp);
	for(auto it=v.begin(); it!=v.end(); it++) 
		if(m[(*it)] != 0){
			cout << (*it) << " " << m[(*it)] << endl; m[(*it)] = 0;
		}
	return 0;
}
