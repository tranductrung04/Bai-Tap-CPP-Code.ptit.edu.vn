#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], dec[1005], asc[1005];
		for(int &i : a) cin >> i;
		int j=0, k=0;
		sort(a, a+n); for(int &i : a) asc[j++]=i;
		sort(a, a+n, greater<int>()); for(int &i : a) dec[k++]=i;
		j=0; k=0;
		for(int i=0; i<n; i++){
			if(i%2==0) cout << dec[j++] << " ";
			else cout << asc[k++] << " ";
		}
		cout << endl;
	}
	return 0;
}
