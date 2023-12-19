#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				n/=i; i=1;
			}
		}
		cout << n << endl;
	}	
	return 0;
}
