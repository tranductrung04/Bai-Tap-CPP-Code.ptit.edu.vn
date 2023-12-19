#include<bits/stdc++.h>
using namespace std;
bool check(string n){
	int sum1=0, sum2=0;
	for(int i=0; i<n.size(); i++){
		if(i%2==0) sum1+=n[i]-'0';
		else sum2+=n[i]-'0';
	}
	if(abs(sum1 - sum2)%11==0) return true;
	else return false;	
}
int main(){
	int t; cin >> t;
	while(t--){
		string n; cin >> n;
		cout << (check(n)) ? 1 : 0;
		cout << endl;		
	}
	return 0;
}
