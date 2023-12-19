#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma = "B20DCCN";
		string ten, lop, ns;
		double gpa;
		static int cnt;
	public:
		friend istream& operator >> (istream &cin, SinhVien &a);
		friend ostream& operator << (ostream &cout, SinhVien a);
};
int SinhVien::cnt = 0;
istream& operator >> (istream &cin, SinhVien &a){
	a.cnt++;
	a.ma =  a.ma + string(3-to_string(a.cnt).size(), '0') + to_string(a.cnt);
	scanf("\n"); getline(cin, a.ten);
	cin >> a.lop >> a.ns >> a.gpa;
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/') a.ns.insert(3, "0");
	return cin;
}

ostream& operator << (ostream &cout, SinhVien a){
	cout << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " "
		 << fixed << setprecision(2) << a.gpa << endl;
	return cout;
}

int main(){
	SinhVien ds[50];
	int N, i;
	cin >> N;
	for(i=0; i<N; i++){
		cin >> ds[i];
	}
	for(i=0; i<N; i++){
		cout << ds[i];
	}
	return 0;
}
