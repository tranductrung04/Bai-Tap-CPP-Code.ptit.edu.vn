#include<bits/stdc++.h>
using namespace std;

class GiangVien{
	private:
		string ma, ten, mon;
	public:
		static int cnt;
		void nhap();
		void in();
		string getTen(); 
		string getMa();
};

int GiangVien::cnt = 0;

string GiangVien::getMa(){
	return ma;
}

string GiangVien::getTen(){
	stringstream ss(ten);
	string token, res;
	while(ss >> token) res = token;
	return res;  
}

void GiangVien::nhap(){
	cnt++;
	ma = "GV" + string(2-to_string(cnt).size(), '0') + to_string(cnt);
	scanf("\n"); getline(cin, ten);
	scanf("\n"); getline(cin, mon);
	stringstream ss(mon);
	string token; mon = "";
	while(ss >> token){
		token[0] = toupper(token[0]);
		mon += token[0];
	}
}

void GiangVien::in(){
	cout << ma << " " << ten << " " << mon << endl;
}

bool cmp(GiangVien a, GiangVien b){
	if(a.getTen() == b.getTen()) return a.getMa() < b.getMa(); 
	return a.getTen() < b.getTen();
}

void sapxep(GiangVien ds[], int n){
	sort(ds, ds+n, cmp);
}
int main(){
	int n; cin >> n;
	GiangVien ds[n];
	for(int i=0; i<n; i++) ds[i].nhap();
	sapxep(ds, n);
	for(int i=0; i<n; i++) ds[i].in();
	return 0;
}
