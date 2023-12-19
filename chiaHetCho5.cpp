#include<bits/stdc++.h>
using namespace std;
bool check(string n){
	int tmp=1, sum=0;
	for(int i=n.size()-1; i>=0; i--){
		sum+=(n[i]-'0')*tmp;
		tmp*=2; tmp%=10; sum%=10;
	}
	return (sum%5==0)? true : false;
}
int main(){
	int t; cin >> t;
	while(t--){
		string n; cin >> n;
		cout << ((check(n))?"Yes":"No") << endl;
	}
	return 0;
}
