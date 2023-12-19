#include<iostream>
using namespace std;
int p[1000000]={0};
void sieve(){
	for(int i=0; i<=1000000; i++) p[i]=1;
	p[0]=0; p[1]=0;
	for(int i=2; i<=1000; i++){
		for(int j=i*i; j<=1000000; j+=i){
			p[j]=0; 
		}
	}
}
int main(){
	int t; cin >> t;
	sieve();
	while(t--){
		int n; cin >> n;
		int i=2;
		while(!p[i] || !p[n-i]) i++;
		if(i>=n-1) { cout << -1 << endl; continue;}
		cout <<  i << " " << n-i << endl;
	}	
	return 0;
}
