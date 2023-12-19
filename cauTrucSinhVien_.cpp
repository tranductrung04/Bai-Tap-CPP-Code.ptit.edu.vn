#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string maSV = "N20DCCN001";
	string ten, lop, ngaySinh;
	double gpa; 
};
void nhapThongTinSV(SinhVien &a){
	getline(cin, a.ten);
	cin >> a.lop >> a.ngaySinh >> a.gpa;
}
void xuLi(SinhVien &a){
	for(int i=0; i<a.ngaySinh.size(); i++) if(a.ngaySinh[i]=='/') a.ngaySinh[i]=' ';
	stringstream ss(a.ngaySinh);
	string tmp; a.ngaySinh="";
	while(ss >> tmp){
		if(stoi(tmp) < 10) tmp="0"+tmp;
		tmp+="/"; a.ngaySinh+=tmp;
	}
	a.ngaySinh.erase(a.ngaySinh.size()-1);
}
void inThongTinSV(SinhVien a){
	xuLi(a);
	cout << a.maSV << " " << a.ten << " " << a.lop << " " << a.ngaySinh << " " << fixed << setprecision(2) << a.gpa;
}
int main(){
	struct SinhVien a;
	nhapThongTinSV(a);
	inThongTinSV(a);
	return 0;
}
