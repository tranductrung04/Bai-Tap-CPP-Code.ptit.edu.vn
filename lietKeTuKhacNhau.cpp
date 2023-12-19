#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream filein; filein.open("VANBAN.in");
	
	map<string, int> m;
	while(!filein.eof()){
		string s; filein >> s;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		m[s]++;
	}
	for(auto it=m.begin(); it!=m.end(); it++){
		cout << (*it).first << endl;
	}
	
	filein.close();
	system("pause");
	return 0;
}
