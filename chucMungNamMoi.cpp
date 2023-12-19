#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, cnt=0; cin >> n;
	cin.ignore();
	map<string, int> m;
	for(int i=0; i<n; i++){
		string s; getline(cin, s);
		m[s]++;
	}
	cout << m.size() << endl;
	return 0;
}
