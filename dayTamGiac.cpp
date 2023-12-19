#include<iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n]; cin >> a[0];
		int max=a[0];
		for(int i=1; i<n; i++) {
			cin >> a[i];
			if(a[i]>max) max=a[i];
		}
		cout << max << endl;
	}
	return 0;
}
