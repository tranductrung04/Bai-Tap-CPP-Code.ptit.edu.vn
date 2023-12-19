#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		void nhap();
		void in();
		string getKhoaHoc();
};

void SinhVien::nhap(){
	cin >> ma;
	scanf("\n"); getline(cin, ten);
	cin >> lop >> email;
}

void SinhVien::in(){
	cout << ma << " " << ten << " " << lop << " " << email << endl;
}

string SinhVien::getKhoaHoc(){
	return "20" + lop.substr(1, 2);
}

int main(){
	int n; cin >> n;
	SinhVien ds[n];
	for(int i=0; i<n; i++) ds[i].nhap();
	int q; cin >> q;
	while(q--){
		string khoaHoc; cin >> khoaHoc;
		cout << "DANH SACH SINH VIEN KHOA " << khoaHoc << ":" << endl;
		for(int i=0; i<n; i++){
			if(ds[i].getKhoaHoc() == khoaHoc) ds[i].in();
		}
	}
	return 0;
}
