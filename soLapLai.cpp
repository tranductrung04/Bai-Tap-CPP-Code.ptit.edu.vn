#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long a, x, y; cin >> a >> x >> y;
		int flag = __gcd(x, y);
		if(flag == 1) cout << a;
		else for(int i=0; i<flag; i++) cout << a;
		cout << endl;
	}
	return 0;
}
