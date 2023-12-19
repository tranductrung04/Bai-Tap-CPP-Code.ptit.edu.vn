#include<iostream>
using namespace std;
int sumOfDigits(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int result=sumOfDigits(n);
		while(result>=10) result=sumOfDigits(result);
		cout << result << endl;
	}
	return 0;
}
