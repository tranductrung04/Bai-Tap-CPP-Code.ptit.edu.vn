#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int cnt = 0;
		for(int &i : a) cin >> i;
		for(int i=0; i<n-1; i++){
			if(a[i] != 0 && a[i] == a[i+1]){ a[i] *= 2; a[i+1] = 0;}
			if(a[i] == 0) cnt++;
		}
		if(!a[n-1]) cnt++;
		for(int i : a) if(i != 0) cout << i << " ";
		for(int i=0; i<cnt; i++) cout << 0 << " ";
		cout << endl;
	}
}
