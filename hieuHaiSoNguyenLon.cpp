#include<bits/stdc++.h>
using namespace std;

void hieu(string a, string b){
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	int n1=a.size(), n2=b.size(), n=0;
	int x[n1], y[n1], h[n1];	
	for(int i=0; i<n1; i++) x[i] = a[i] - '0';
	for(int i=0; i<n2; i++) y[i] = b[i] - '0';
	for(int i=n2; i<n1; i++) y[i] = 0;
	
	int res = 0;
	for(int i=0; i<n1; i++){
		int tmp = x[i] + 10 - y[i] - res;
		if(tmp < 10) res = 1;
		else res = 0;
		h[n++] = tmp%10 ;
 	}
 	
 	for(int i=n-1; i>=0; i--) cout << h[i];
 	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		string x, y; cin >> x >> y;
		if(x.size() < y.size()) swap(x, y);
		else if(x.size() == y.size() && x<y) swap(x, y);
		hieu(x, y);
	}
	return 0;
}
