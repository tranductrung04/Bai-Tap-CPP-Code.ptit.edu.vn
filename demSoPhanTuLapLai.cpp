#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], tmp=1, cnt=0;
		for(int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		for(int i=1; i<n; i++){
			if(a[i]==a[i-1]) tmp++;
			else if(tmp!=1) {cnt+=tmp; tmp=1;}
		}
		if(tmp!=1) cnt+=tmp;
		cout << cnt << endl;
	}
	return 0;
}
