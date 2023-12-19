#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		friend istream& operator >> (istream &cin, SinhVien &a);
		friend ostream& operator << (ostream &cout, SinhVien a);
		string getlop();
		string getma();
};
string SinhVien::getlop(){
	return lop;
}

string SinhVien::getma(){
	return ma;
}

istream& operator >> (istream &cin, SinhVien &a){
	cin >> a.ma;
	scanf("\n"); getline(cin, a.ten);
	cin >> a.lop >> a.email;
	return cin;
}

ostream& operator << (ostream &cout, SinhVien a){
	cout << a.ma << " "
	 	 << a.ten << " "
	 	 << a.lop << " "
	 	 << a.email << endl;
	return cout;
}

bool cmp(SinhVien a, SinhVien b){
	if(a.getlop() == b.getlop()) return a.getma() < b.getma();
	return a.getlop() < b.getlop();
}

void sapxep(SinhVien ds[], int n){
	sort(ds, ds+n, cmp);
}

int main(){
	int n; cin >> n;
	SinhVien ds[n];
	for(int i=0; i<n; i++) cin >> ds[i];
	sapxep(ds, n);
	for(int i=0; i<n; i++) cout << ds[i];
	return 0;
}
