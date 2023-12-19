#include<iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]<a[i]) swap(a[i], a[j]);
			else if(a[j]==a[i]) a[j]=-1;
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]!=-1) cout << a[i] << " ";
	}
	return 0;
}
