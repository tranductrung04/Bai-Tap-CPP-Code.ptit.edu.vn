#include<iostream>
#include<cmath>
using namespace std;
int check(int n){
	int cnt=0, even=0, odd=0;
	while(n){
		if(n%10%2==0) even++;
		else odd++;
		cnt++;
		n/=10;
	}
	if(even!=odd) return 0;
	return 1;
}
int main(){
	int n; cin >> n;
	if(n%2==1) return 0;
	int a=pow(10, n-1), b=pow(10, n)-1, cnt=0;
	for(int i=a; i<=b; i++) {
		if(check(i)) {cout << i << " "; cnt++;}
		if(cnt==10){ cnt=0; cout << endl;}
	}
	return 0;
}
