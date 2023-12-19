#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu, mau;
	PhanSo(long long tu, long long mau){}
	friend istream& operator >> (istream& nhap, PhanSo &p){
		nhap >> p.tu >> p.mau;
		return nhap;
	}
	friend PhanSo operator + (const PhanSo p, const PhanSo q){
		PhanSo t(1, 1);
		long long tmp1 = p.tu * q.mau + q.tu * p.mau;
		long long tmp2 = p.mau * q.mau;
		long long gcd = __gcd(tmp1, tmp2);
		t.tu = tmp1/gcd;
		t.mau = tmp2/gcd;
		return t;
	}
	friend ostream& operator << (ostream& xuat, PhanSo p){
		xuat << p.tu << "/" << p.mau;
		return xuat;
	}
};
int main(){
	struct PhanSo p(1, 1), q(1, 1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
