#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string maNhanVien = "00001";
	string ten, gioiTinh, ngaySinh, diaChi, hopDong;
	long long soThue;
};
void nhap(NhanVien &a){
	getline(cin, a.ten);
	cin >> a.gioiTinh >> a.ngaySinh;
	cin.ignore();
	getline(cin, a.diaChi);
	cin >> a.soThue >> a.hopDong;
}
void in(NhanVien a){
	cout << a.maNhanVien << " " << a.ten << " " << a.gioiTinh << " "  << a.ngaySinh << " " << a.diaChi << " " << a.soThue << " " << a.hopDong;
}
int main(){
	struct NhanVien a;
	nhap(a);
	in(a);
	return 0;
}
