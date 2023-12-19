#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string maNV = "00001";
	string ten, gioiTinh, ngaySinh, diaChi, soThue, hopDong;
	friend istream& operator >> (istream& nhap, NhanVien &a){
		getline(nhap, a.ten);
		nhap >> a.gioiTinh >> a.ngaySinh; nhap.ignore();
		getline(nhap, a.diaChi);
		nhap >> a.soThue >> a.hopDong;
		return nhap;
	}
	friend ostream& operator << (ostream& xuat, NhanVien a){
		xuat << a.maNV << " " << a.ten << " " << a.gioiTinh << " " << a.ngaySinh << " " << a.diaChi << " " << a.soThue << " " << a.hopDong;
		return xuat;
	}
};
int main(){
	NhanVien a;
	cin >> a;
	cout << a;
	return 0;
}
