#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string ten;
	string ngaySinh;
	float mon1, mon2, mon3;
};
void nhap(ThiSinh &A){
	getline(cin, A.ten);
	cin >> A.ngaySinh;
	cin >> A.mon1 >> A.mon2 >> A.mon3;
}
void in(ThiSinh A){
	cout << A.ten << " " << A.ngaySinh << " ";
	cout << fixed << setprecision(1) << A.mon1+A.mon2+A.mon3;
}
int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}
