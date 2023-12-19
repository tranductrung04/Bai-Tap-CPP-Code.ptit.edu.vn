#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a; cin >> a;
		int x[10]={};
		while(a){
			if(a%10 != 1 && a%10 != 0){
				switch (a%10){
					case 4: x[2]+=2; x[3]++; break;
					case 6: x[3]++; x[5]++; break;
					case 8: x[7]++; x[2]+=3; break;
					case 9: x[7]++; x[3]+=2; x[2]++; break;
					default: x[a%10]++;
				}
			}
			a/=10;
		}
		for(int i=7; i>=2; i--){
			for(int j=0; j<x[i]; j++) cout << i;
		}
		cout << endl;
	}
	return 0;
}
