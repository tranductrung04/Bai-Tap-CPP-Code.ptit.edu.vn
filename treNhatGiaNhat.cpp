#include<bits/stdc++.h>
using namespace std;

struct Nguoi{
	string ten, ns;
};
void nhap(Nguoi ds[], int n){
	for(int i=0; i<n; i++){
		cin >> ds[i].ten >> ds[i].ns;
	}
}
bool check(string a, string b){
	int sum1 = stoi(a.substr(0, 2)) + 30*stoi(a.substr(3, 2))
			 + 365*stoi(a.substr(6));
	int sum2 = stoi(b.substr(0, 2)) + 30*stoi(b.substr(3, 2))
			 + 365*stoi(b.substr(6));
	return sum1 > sum2;
}
void in(Nguoi a){
	cout << a.ten << endl;
}
void  xu_li(Nguoi ds[], int n){
	int idxMin=0, idxMax=0;
	for(int i=1; i<n; i++){
		if(check(ds[i].ns, ds[idxMin].ns)) idxMin=i;
		if(!check(ds[i].ns, ds[idxMax].ns)) idxMax=i;
	}
	in(ds[idxMin]);
	in(ds[idxMax]);
}
int main(){
	int n; cin >> n;
	struct Nguoi ds[n];
	nhap(ds, n);
	xu_li(ds, n);
	return 0;
}
