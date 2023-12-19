#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char, int> c;
		for(int i=0; i<s.size(); i++){
			c[s[i]]++;
		}
		for(int i=0; i<s.size(); i++){
			if(c[s[i]]!=0){ cout << s[i] << c[s[i]]; c[s[i]]=0;}
		}
		cout << endl;
	}
	return 0;
}
