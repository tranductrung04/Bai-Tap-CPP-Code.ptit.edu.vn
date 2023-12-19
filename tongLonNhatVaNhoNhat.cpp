#include<bits/stdc++.h>
using namespace std;

long long min(string s){
	for(int i=0; i<s.size(); i++) if(s[i] == '6') s[i] = '5';
	return stoll(s);
}
long long max(string s){
	for(int i=0; i<s.size(); i++) if(s[i] == '5') s[i] = '6';
	return stoll(s);
}
int main(){
	int t; cin >> t;
	while(t--){
		string x1, x2; cin >>  x1 >> x2;
		cout << min(x1) + min(x2) << " "
			 << max(x1) + max(x2) << endl;
	}
	return 0;
} 
