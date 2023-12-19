#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], l[n];
		for(int &i : a) cin >> i;
		for(int i=0; i<n; i++){
			l[i] = 1;
			for(int j=i; j>=0; j--){
				if(a[i] > a[j] && l[j]+1 > l[i]) l[i] = l[j] + 1;
			}
		}
		int max = *(max_element(l, l+n));
		cout << max << endl;
	}
	return 0;
}
