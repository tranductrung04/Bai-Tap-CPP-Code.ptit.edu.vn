#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream filein; filein.open("DATA1.in");
	map<string, int> m, u, i;
	while(!filein.eof()){
		string tmp; filein >> tmp;
		transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
		m[tmp]++; u[tmp]++;
	}
	filein.close();
	filein.open("DATA2.in");
	while(!filein.eof()){
		string tmp; filein >> tmp;
		transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
		if(m.count(tmp)) i[tmp]++;
		u[tmp]++;
	}
	for(auto it=u.begin(); it!=u.end(); it++) cout << (*it).first << " ";
	cout << endl;
	for(auto it=i.begin(); it!=i.end(); it++) cout << (*it).first << " ";
	
	filein.close();
	system("pause");
	return 0;
}
