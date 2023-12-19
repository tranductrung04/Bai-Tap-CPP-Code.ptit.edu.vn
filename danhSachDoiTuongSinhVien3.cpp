#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma = "B20DCCN";
		string ten, lop, ns;
		double gpa;
	public:
		static int cnt;
		friend istream& operator >> (istream &cin, SinhVien &a);
		friend ostream& operator << (ostream &cout, SinhVien a);
		double getGpa();
};
int SinhVien::cnt = 0;

double SinhVien::getGpa(){
	return gpa;
}

istream& operator >> (istream &cin, SinhVien &a){
	a.cnt++;
	a.ma = a.ma + string(3-to_string(a.cnt).size(), '0')
		  + to_string(a.cnt);
	scanf("\n"); getline(cin, a.ten);
	transform(a.ten.begin(), a.ten.end(), a.ten.begin(), ::tolower);
	stringstream ss (a.ten);
	string token; a.ten = "";
	while(ss >> token){
		token[0] = toupper(token[0]); token += " ";
		a.ten += token;
	}
	cin >> a.lop >> a.ns >> a.gpa;
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/') a.ns.insert(3, "0");
	return cin;
}

ostream& operator << (ostream &cout, SinhVien a){
	cout << a.ma << " "
		 << a.ten << " "
		 << a.lop << " "
		 << a.ns << " "
		 << fixed << setprecision(2) << a.gpa << endl;
	return cout;
}

bool cmp(SinhVien a, SinhVien b){
	return a.getGpa() > b.getGpa();
}

void sapxep(SinhVien ds[], int n){
	sort(ds, ds+n, cmp);
}
int main(){
	SinhVien ds[50];
	int N, i;
	cin >> N;
	for(i=0; i<N; i++){
		cin >> ds[i];
	}
	sapxep(ds, N);
	for(i=0; i<N; i++){
		cout << ds[i];
	}
	return 0;
}
