#include<bits/stdc++.h>
using namespace std;
string xuLi(string ngaySinh){
	for(int i=0; i<ngaySinh.size(); i++) if(ngaySinh[i] == '/') ngaySinh[i]=' ';
	stringstream ss (ngaySinh);
	string tmp; ngaySinh="";
	while(ss >> tmp){
		if(stoi(tmp) < 10) tmp.insert(0, "0");
		ngaySinh+=tmp; ngaySinh+="/";
	}
	ngaySinh.erase(ngaySinh.size()-1);
	return ngaySinh;
}
struct SinhVien {
	string maSV = "B20DCCN001";
	string ten, lop, ngaySinh;
	double gpa;
	friend istream& operator >> (istream& nhap, SinhVien &a){
		getline(nhap, a.ten);
		nhap >> a.lop >> a.ngaySinh >> a.gpa;
		return nhap;
	}
	friend ostream& operator << (ostream& xuat, SinhVien a){
		xuat << a.maSV << " " << a.ten << " " << a.lop << " " << xuLi(a.ngaySinh) << " ";
		xuat << fixed << setprecision(2) << a.gpa;
		return xuat;
	}
};
int main(){
	SinhVien a;
	cin >> a;
	cout << a;
	return 0;
}
