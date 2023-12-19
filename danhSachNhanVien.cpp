#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string  ma, ten, gt, ns, dc, mst, nkhd;
};
void nhap(NhanVien &a){
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.nkhd;
}
void inds(NhanVien ds[], int N){
	for(int i=0; i<N; i++){
		ds[i].ma=to_string(i+1);
		while(ds[i].ma.size() < 5) ds[i].ma = "0" + ds[i].ma;
		cout << ds[i].ma << " "
			 << ds[i].ten << " "
			 << ds[i].gt << " "
			 << ds[i].ns << " "
			 << ds[i].dc << " "
			 << ds[i].mst << " "
			 << ds[i].nkhd << endl;
	}
}
int main(){
	struct NhanVien ds[50];
	int N,i;
	cin >> N;
	for(int i=0; i<N; i++) nhap(ds[i]);
	inds(ds, N);	
	return 0;
}
