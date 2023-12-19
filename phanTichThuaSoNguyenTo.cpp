#include<iostream>
#include<cmath>
using namespace std;
void solve(int n){
	int a[10000], idx=0, mark[10001]={0};
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) {
			a[idx]=i; mark[a[idx++]]++;
			n/=i; i=1;
		}
	}
	a[idx]=n; mark[a[idx++]]++;
	for(int i=0; i<idx; i++){
		if(mark[a[i]]!=0){
			cout << a[i] << " " << mark[a[i]] << " ";
			mark[a[i]]=0;
		}
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		solve(n);		
	}
	return 0;
}
