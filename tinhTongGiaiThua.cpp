#include<iostream>
using namespace std;
long long factorial(int n){
	long long f=1;
	for(int i=1; i<=n; i++) f*=i;
	return f;
}
int main(){
	int n; cin >> n;
	long long sum=0;
	for(int i=1; i<=n; i++) sum+=factorial(i);
	cout << sum;
	return 0;
}
