#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string stt, ma, ten, lop, email, dn;
};
void nhap(SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		ds[i].stt = to_string(i+1);
		cin >> ds[i].ma;
		scanf("\n");  getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].email >> ds[i].dn;
	}
}
bool cmp(SinhVien a, SinhVien b){
	return a.ten < b.ten;
}
void sap_xep(SinhVien ds[], int n){
	sort(ds, ds+n, cmp);
}
void in(SinhVien a){
	cout << a.stt << " "
		 << a.ma << " "
		 << a.ten << " "
		 << a.lop << " "
		 << a.email << " "
		 << a.dn << endl;
}
void tim_kiem(SinhVien ds[], int n){
	int q; cin >> q;
	vector<SinhVien> v;
	for(int j=0; j<q; j++){
		string dntk; cin >> dntk;
		for(int i=0; i<n; i++){
			if(ds[i].dn == dntk) in(ds[i]);
		}
	}
}
int main(){
	int n; cin >> n;
	struct SinhVien ds[n];
	nhap(ds, n);
	sap_xep(ds, n);
	tim_kiem(ds, n);
	return 0;
}
