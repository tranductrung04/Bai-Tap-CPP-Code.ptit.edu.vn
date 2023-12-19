#include<bits/stdc++.h>
using namespace std;

class NhanVien{
	private:
		string ma, ten, gt, ns, dc, mst, hd;
	public:
		static int cnt;
		friend istream& operator >> (istream &cin, NhanVien &a);
		friend ostream& operator << (ostream &cout, NhanVien a);
		string getns();
};
int NhanVien::cnt = 0;

string NhanVien::getns(){
	return ns;
}

istream& operator >> (istream &cin, NhanVien &a){
	a.cnt ++;
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

bool cmp(NhanVien a, NhanVien b){
	int res1 = stoi(a.getns().substr(6)) * 365
			 + stoi(a.getns().substr(0, 2)) * 30
			 + stoi(a.getns().substr(3, 2));
	int res2 = stoi(b.getns().substr(6)) * 365
			 + stoi(b.getns().substr(0, 2)) * 30
			 + stoi(b.getns().substr(3, 2));
	return res1 < res2;
}

void sapxep(NhanVien ds[], int N){
	sort(ds, ds+N, cmp);
}

int main(){
	NhanVien ds[50];
	int N, i;
	cin >> N;
	for(i=0; i<N; i++) cin >> ds[i];
	sapxep(ds, N);
	for(i=0; i<N; i++) cout << ds[i];
	return 0;
}
