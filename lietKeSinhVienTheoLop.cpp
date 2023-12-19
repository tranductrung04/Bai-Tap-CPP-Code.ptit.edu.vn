#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		string getlop();
		void nhap();
		void in();
};

string SinhVien::getlop(){
	return lop;
}

void SinhVien::nhap(){
	cin >> ma;
	scanf("\n"); getline(cin, ten);
	cin >> lop >> email;
}

void SinhVien::in(){
	cout << ma << " " << ten << " " << lop << " " << email << endl;
}
int main(){
	int n; cin >> n;
	SinhVien ds[n];
	for(int i=0; i<n; i++) ds[i].nhap();
	int q; cin >> q;
	while(q--){
		string lopct; cin >> lopct;
		cout << "DANH SACH SINH VIEN LOP " << lopct << ":" << endl;
		for(int i=0; i<n; i++){
			if(ds[i].getlop() == lopct) ds[i].in();
		}
	}
	return 0;
}
