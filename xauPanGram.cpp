#include<bits/stdc++.h>
using namespace std;
int number_of_missing_characters(string s){
	int l[s.size()], max=0;
	for(int i=0; i<s.size(); i++){
		l[i]=1;
		for(int j=0; j<i; j++){
			if(s[i]>s[j] && l[j]+1>l[i]) l[i]=l[j]+1;
		}
	}
	for(int i=0; i<s.size(); i++){
		if(l[i]>max) max=l[i];
	}
	return 26-max;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int k; cin >> k;
		sort(s.begin(), s.end());
		if(k>=number_of_missing_characters(s)) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
