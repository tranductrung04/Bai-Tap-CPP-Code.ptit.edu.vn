#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu, mau;
	PhanSo(long long tu, long long mau){}
	friend istream& operator >> (istream& nhap, PhanSo &p){
		nhap >> p.tu >> p.mau;
		return nhap;
	}
	void rutgon(){
		long long gcd = __gcd(tu, mau);
		tu/=gcd; mau/=gcd;
	}
	friend ostream& operator << (ostream& xuat, PhanSo p){
		xuat << p.tu << "/" << p.mau;
		return xuat;
	}
};
int main(){
	PhanSo p(1, 1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
