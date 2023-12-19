#include<iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt=1;
		long long f1=0, f2=1, fn;
		while(cnt!=n){
			fn=f1+f2;
			f1=f2; f2=fn;
			cnt++;
		}
		cout << fn << endl;
	}
	return 0;
}
