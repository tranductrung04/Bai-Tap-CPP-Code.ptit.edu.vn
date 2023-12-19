#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	long long tu, mau;
};
void process(PhanSo &a, PhanSo &b){
	PhanSo c, d;
	long long tmp1 = a.tu * b.mau + a.mau * b.tu;
	long long tmp2 = a.mau * b.mau;
	long long res = __gcd(tmp1, tmp2); 
	c.tu = pow(tmp1/res, 2);
	c.mau = pow(tmp2/res, 2);
	cout << c.tu << "/" << c.mau << " ";
	tmp1 = a.tu * b.tu *  c.tu;
	tmp2 = a.mau * b.mau * c.mau;
	res = __gcd(tmp1, tmp2);
	d.tu = tmp1 / res;
	d.mau = tmp2 / res;
	cout << d.tu << "/" << d.mau << endl;
}
int main(){
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}	
	return 0;
}
