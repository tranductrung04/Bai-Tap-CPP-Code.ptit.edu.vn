#include<bits/stdc++.h>
using namespace std;
string xuLiten(string s){
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	s[0]=toupper(s[0]);
	for(int i=0; i<s.size(); i++){
		if(s[i] == ' ') s[i+1]=toupper(s[i+1]);
	}
	return s;
}
string xuLins(string s){
	for(int i=0; i<s.size(); i++) if(s[i] == '/') s[i]=' ';
	stringstream ss(s);
	string tmp; s="";
	while(ss >> tmp){
		if(stoi(tmp) < 10) tmp.insert(0, "0");
		s+=tmp; s+="/";
	}
	s.erase(s.size()-1);
	return s;
}
struct SinhVien{
	string maSV = "B20DCCN001";
	string ten, lop, ngaySinh;
	double gpa;
	friend istream& operator >> (istream& nhap, SinhVien &a){
		getline(nhap, a.ten);
		nhap >> a.lop >> a.ngaySinh >> a.gpa;
		return nhap;
	}
	friend ostream& operator << (ostream& xuat, SinhVien a){
		xuat << a.maSV << " " << xuLiten(a.ten) << " " << a.lop << " " << xuLins(a.ngaySinh) << " ";
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
