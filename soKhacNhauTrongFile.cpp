#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream filein; filein.open("DATA.in");
	
	vector<int> v;
	map<int, int> m;
	while(!filein.eof()){
		int tmp; filein >> tmp;
		v.push_back(tmp);
	}
	v.erase(v.end()-1);
	for(int i : v) m[i]++;
	for(auto it=m.begin(); it!=m.end(); it++){
		cout << (*it).first << " " << (*it).second << endl;
	}
	
	filein.close();
	system("pause");
	return 0;
}
