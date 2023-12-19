#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream filein; filein.open("DATA.in");
	
	int n, m; filein >> n >> m;
	set<int> a, ite;
	for(int i=0; i<n; i++){
		int tmp; filein >> tmp;
		a.insert(tmp);
	}
	for(int i=0; i<m; i++){
		int tmp; filein >> tmp;
		if(a.count(tmp)) ite.insert(tmp);
	}
	for(auto it=ite.begin(); it!=ite.end(); it++) cout << (*it) << " "; cout << endl;
	
	filein.close();
	system("pause");
	return 0;
}
