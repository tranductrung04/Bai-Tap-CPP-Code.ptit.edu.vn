#include<iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int mark[100000]={0};
		for(int i=0; i<s.size(); i++) mark[s[i]]++;
		for(int i=0; i<s.size(); i++){
			if(mark[s[i]]==1) cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
