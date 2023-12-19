#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int Max = INT_MIN;
		map<char, int> m;
		for(int i=0; i<s.size(); i++){
			m[s[i]]++;
			Max = max(Max, m[s[i]]);
		}
		cout << ((Max <= s.size()-Max+1) ? 1 : 0) << endl;
	}
	return 0;
}
