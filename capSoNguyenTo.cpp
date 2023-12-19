#include<iostream>
#include<cmath>
using namespace std;

int p[10000]={0};
void sieve(){
	for(int i=0; i<=10000; i++) p[i]=1;
	p[0]=0; p[1]=0;
	for(int i=2; i<=100; i++){
		for(int j=i*i; j<=10000; j+=i) p[j]=0;
	}
}
int main(){
	sieve();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int i=2;
		while(i<=n){
			if(p[i] && p[n-i]) {cout << i << " " << n-i << endl; break; } 
			i++;
		}
	}
	return 0;
}