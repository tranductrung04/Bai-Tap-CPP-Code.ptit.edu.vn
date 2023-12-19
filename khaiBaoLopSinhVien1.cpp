#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string maSV = "B20DCCN001";
	string ten, lop, ngaySinh;
	double gpa;
	void nhap(){
		getline(cin, ten);
		cin >> lop >> ngaySinh >> gpa;
	}
	void xuat(){
		for(int i=0; i<ngaySinh.size(); i++) if(ngaySinh[i]=='/') ngaySinh[i]=' ';
		stringstream ss(ngaySinh);
		string tmp; ngaySinh = "";
		while(ss >> tmp){
			if(stoi(tmp) < 10) tmp.insert(0, "0");
			ngaySinh+=tmp; ngaySinh+="/";
		}
		ngaySinh.erase(ngaySinh.size()-1);
		cout << maSV << " " << ten << " " << lop << " " << ngaySinh << " ";
		cout << fixed << setprecision(2) << gpa;
	}
};
int main(){
	SinhVien a;
	a.nhap();
	a.xuat();
	return 0;
}
