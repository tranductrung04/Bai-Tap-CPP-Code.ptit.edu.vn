#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	long long tu, mau;
};
void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}
struct PhanSo tong(PhanSo p, PhanSo q){
	struct PhanSo t;
	long long tmp1 = p.tu * q.mau + q.tu * p.mau;
	long long tmp2 = p.mau * q.mau;
	long long res = __gcd(tmp1, tmp2);
	t.tu = tmp1/res;
	t.mau = tmp2/res;
	return t;
}
void in(PhanSo p){
	cout << p.tu << "/" << p.mau << endl;
}
int main(){
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);	
	return 0;
}
