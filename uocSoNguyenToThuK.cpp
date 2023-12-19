#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		if(n==1) { cout << -1 << endl; continue;}
		int a[10000], idx=0;
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				a[idx++]=i; n/=i; i=1;
			}
		}
		a[idx++]=n;
		if(k<=idx) cout << a[k-1] << endl;
		else cout << -1 << endl;
	}
	return 0;
}
