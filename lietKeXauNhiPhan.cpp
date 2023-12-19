#include<bits/stdc++.h>
using namespace std;

void init(int a[], int n){
	for(int i=1; i<=n; i++) a[i]=0;
}
void gen(int a[], int n, int *terminal){
	int i=n;
	while(a[i] == 1 && i >= 1) {
		a[i]=0;
		i--;
	}
	if(i == 0) *terminal = 0;
	else a[i]=1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int terminal = 1, a[100]={0};
		init(a, n);
		while(terminal){
			if(a[n] == 1) for(int i=1; i<=n; i++) cout << a[i];
			cout << " ";
			gen(a, n, &terminal);
		}
		cout << endl;
	}
	return 0;
}
