#include<bits/stdc++.h>
using namespace std;
long long factorial(int n){
	long long f=1;
	for(int i=1; i<=n; i++) f*=i;
	return f;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, maxDigit=-1, x[1000], sizex=0; 
		long long a, fa=1;
		cin >> n >> a;
		long long b=a;
		while(a){
			if(a%10 > maxDigit) maxDigit = a%10;
			fa*=factorial(a%10);
			a/=10;
		}
		maxDigit--; 
		while(fa > 1 && maxDigit > 1){
			long long tmp=factorial(maxDigit);
			if(fa % tmp == 0) {fa/=tmp; x[sizex++]=maxDigit; }
			else maxDigit--;
		}
		if(fa!=1){
			int cnt=0;
			memset(x, 0, sizeof(int));
			while(b){
				if(b%10 != 0 && b%10 != 1){ x[cnt++] = b%10;}
				b/=10;
			}
			sizex=cnt;
			sort(x, x+sizex, greater<int>());
			for(int i=0; i<sizex; i++) cout << x[i];
		}
		else for(int i=0; i<sizex; i++) cout << x[i];
		cout << endl;
	}
	return 0;
}
