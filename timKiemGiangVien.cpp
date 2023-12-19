#include<bits/stdc++.h>
using namespace std;

class GiangVien{
	private:
		string ma, ten, mon;
	public:
		static int cnt;
		void nhap();
		void in();
		string getTuKhoa();
};

int GiangVien::cnt = 0;

string GiangVien::getTuKhoa(){
	string s = ten;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	return s;
}

string chuanHoa(string s){
	stringstream ss(s);
	string token; s = "";
	while(ss >> token){
		token[0] = toupper(token[0]);
		s += token[0];
	}
	return s;
}

void GiangVien::nhap(){
	cnt++;
	ma = "GV" + string(2-to_string(cnt).size(), '0') + to_string(cnt);
	getline(cin >> ws, ten);
	getline(cin >> ws, mon);
	mon = chuanHoa(mon);
}

void GiangVien::in(){
	cout << ma << " " << ten << " " << mon << endl;
}

int main(){
	int n; cin >> n;
	GiangVien ds[n];
	for(int i=0; i<n; i++) ds[i].nhap();
	int q; cin >> q;
	while(q--){
		string tuKhoa; scanf("\n"); getline(cin, tuKhoa);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tuKhoa << ":" << endl;
		transform(tuKhoa.begin(), tuKhoa.end(), tuKhoa.begin(), ::tolower);
		for(int i=0; i<n; i++)
			if(ds[i].getTuKhoa().find(tuKhoa) != string::npos) ds[i].in();
	}
	return 0;
}
