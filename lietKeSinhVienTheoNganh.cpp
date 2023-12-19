#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		void nhap();
		void in();
		string getNganh();
};

void SinhVien::nhap(){
	cin >> ma;
	scanf("\n"); getline(cin, ten);
	cin >> lop >> email;
}

void SinhVien::in(){
	cout << ma << " " << ten << " " << lop << " " << email << endl;
}

string SinhVien::getNganh(){
 	string s = ma.substr(3, 4);
	if(s == "DCCN" || s == "DCAT"){
		if(lop[0] == 'E' || lop[0] == 'e') return "";
	}
	return s;
}

int main(){
	int n; cin >> n;
	SinhVien ds[n];
	for(int i=0; i<n; i++) ds[i].nhap();
	int q; cin >> q;
	while(q--){
		string nganh;		
		scanf("\n"); getline(cin, nganh);
		transform(nganh.begin(), nganh.end(), nganh.begin(), ::toupper);
		cout << "DANH SACH SINH VIEN NGANH " << nganh << ":" << endl;
		if(nganh == "KE TOAN") nganh = "DCKT";
		if(nganh == "CONG NGHE THONG TIN") nganh = "DCCN";
		if(nganh == "AN TOAN THONG TIN") nganh = "DCAT";
		if(nganh == "VIEN THONG") nganh = "DCVT";
		if(nganh == "DIEN TU") nganh = "DCDT";
		for(int i=0; i<n; i++)
			if(ds[i].getNganh() == nganh) ds[i].in();
	}
	return 0;
}
