#include<bits/stdc++.h>
using namespace std;

class GiangVien{
	private:
		string ma, ten, mon;
	public:
		void nhap();
		void in();
		string getMon();
		static int cnt;
};

string chuanHoa(string s){
	stringstream ss(s);
	string token; s = "";
	while(ss >> token){
		token[0] = toupper(token[0]);
		s += token[0];
	}
	return s;
}

int GiangVien::cnt = 0;

string GiangVien::getMon(){
	return mon;
}

void GiangVien::nhap(){
	cnt++;
	ma = "GV" + string(2-to_string(cnt).size(), '0') + to_string(cnt);
	scanf("\n"); getline(cin, ten);
	scanf("\n"); getline(cin, mon);
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
		string monct;
		scanf("\n"); getline(cin, monct);
		monct = chuanHoa(monct);
		cout << "DANH SACH GIANG VIEN BO MON " << monct << ":" << endl;
		for(int i=0; i<n; i++)
			if(ds[i].getMon() == monct) ds[i].in();
	}
	return 0;
}
