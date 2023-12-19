#include<iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n][3], cnt=0, tmp=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++) cin >> a[i][j];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			if(a[i][j]) tmp++;
			if(tmp==2) {cnt++; break;}
		}
		tmp=0;
	}
	cout << cnt << endl;
	return 0;
}
