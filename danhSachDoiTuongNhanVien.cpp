#include<bits/stdc++.h>
using namespace std;

class NhanVien{
	private:
		string ma, ten, gt, ns, dc, mst, hd;
	public:
		static int cnt;
		friend istream& operator >> (istream &cin, NhanVien &a);
		friend ostream& operator << (ostream &cout, NhanVien a);
};
int NhanVien::cnt = 0;

istream& operator >> (istream &cin, NhanVien &a){
	a.cnt++;
	a.ma = string(5-to_string(a.cnt).size(), '0') + to_string(a.cnt);
	scanf("\n"); getline(cin, a.ten);
	cin >> a.gt >> a.ns;
	scanf("\n"); getline(cin, a.dc);
	cin >> a.mst >> a.hd;
	return cin;
}

ostream& operator << (ostream &cout, NhanVien a){
	cout << a.ma << " "
		 << a.ten << " "
		 << a.gt << " "
		 << a.ns << " "
		 << a.dc << " "
		 << a.mst << " "
		 << a.hd << endl;
	return cout;
}
int main(){
	NhanVien ds[50];
	int N, i;
	cin >> N;
	for(i=0; i<N; i++) cin >> ds[i];
	for(i=0; i<N; i++) cout << ds[i];
	return 0;
}
