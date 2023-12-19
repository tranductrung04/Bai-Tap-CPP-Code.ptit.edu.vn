#include<bits/stdc++.h>
using namespace std;

void tong(string x, string y){
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end ());
	int n1=x.size(), n2=y.size(), n=0, res=0;
	int a[n1], b[n1], t[n1+1];
	for(int i=0; i<n1; i++) a[i] = x[i] - '0';
	for(int i=0; i<n2; i++) b[i] = y[i] - '0';
	for(int i=n2; i<n1; i++) b[i] = 0;
	for(int i=0; i<n1; i++){
		int tmp = a[i] + b[i] + res;
		if(tmp >= 10) res = 1;
		else res = 0;
		t[n++] = tmp%10;
	}
	if(res) t[n++] = 1;
	for(int i=n-1; i>=0; i--) cout << t[i]; cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		string x, y; cin >> x >> y;
		if(x.size()<y.size() || x.size()==y.size()&&x<y) swap(x, y);
		tong(x, y);
	}
	return 0;
}
