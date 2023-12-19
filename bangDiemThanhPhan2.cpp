#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string ma, ten, lop;
	double d1, d2, d3;
};
void nhap(SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		cin >> ds[i].ma;
		scanf("\n"); getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].d1 >> ds[i].d2 >> ds[i].d3;
	}
}
bool cmp(SinhVien a, SinhVien b){
	return a.ten < b.ten;
}
void sap_xep(SinhVien ds[], int n){
	sort(ds, ds+n, cmp);
}
void inds(SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		cout << i+1 << " ";
		cout << ds[i].ma << " "
			 << ds[i].ten << " "
			 << ds[i].lop << " "
			 << fixed << setprecision(1)
			 << ds[i].d1 << " "
			 << ds[i].d2 << " "
			 << ds[i].d3 << endl;
	}
}
int main(){
	int n; cin >> n;
	struct SinhVien ds[n];
	nhap(ds, n);
	sap_xep(ds, n);
	inds(ds, n);
	return 0;
}
