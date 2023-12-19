#include<bits/stdc++.h>
using namespace std;
int main(){
	string name;
	getline(cin, name);
	transform(name.begin(), name.end(), name.begin(), ::tolower);
	stringstream ss(name);
	string tmp, sur="";
	while(ss >> tmp){
		tmp[0]=toupper(tmp[0]);
		name=tmp;
		sur+=tmp; sur+=" ";
	}
	int pos=0;
	for(int i=0; i<sur.size()-1; i++) if(sur[i]==' ') pos=i;
	sur.erase(pos);
	transform(name.begin(), name.end(), name.begin(), ::toupper);
	cout << sur + ", " + name;
	return 0;
}
