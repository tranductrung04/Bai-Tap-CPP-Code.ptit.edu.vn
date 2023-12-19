#include<bits/stdc++.h>
using namespace std;

class DoanhNghiep{
	private:
		string ma, ten;
		int ssv;
	public:
		void nhap();
		void in();
		int getSsv();
		string getMa();	
};

int DoanhNghiep::getSsv(){
	return ssv;
}

string DoanhNghiep::getMa(){
	return ma;
}

void DoanhNghiep::nhap(){
	cin >> ma;
	scanf("\n"); getline(cin, ten);
	cin >> ssv;
}

void DoanhNghiep::in(){
	cout << ma << " " << ten << " " << ssv << endl;
}

bool cmp(DoanhNghiep a, DoanhNghiep b){
	if(a.getSsv() == b.getSsv()) return a.getMa() < b.getMa();
	return a.getSsv() > b.getSsv();
}

void sapxep(DoanhNghiep ds[], int n){
	sort(ds, ds+n, cmp);
}

int main(){
	int n; cin >> n;
	DoanhNghiep ds[n];
	for(int i=0; i<n; i++) ds[i].nhap();
	sapxep(ds, n);
	for(int i=0; i<n; i++) ds[i].in();
	return 0;
}
