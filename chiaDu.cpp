#include<iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int a, m; cin >> a >> m;
		int x=0;
		while(a*x%m!=1 && x<=m-1) x++;
		if(x==m) cout << -1 << endl;
		else cout << x << endl;	
	}
	return 0;
}
