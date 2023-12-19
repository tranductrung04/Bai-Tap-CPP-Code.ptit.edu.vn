#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n; cin >> n;
	int a[100000], idx=0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			a[idx++]=i;
			n/=i; i=1;
		}
	}
	a[idx++]=n;
	int cnt=1;
	for(int i=1; i<idx; i++){
		if(a[i]!=a[i-1]) {cout << a[i-1] << " " << cnt << endl; cnt=1;}
		else cnt++;
	}
	cout << a[idx-1] << " " << cnt;
	return 0;
}
