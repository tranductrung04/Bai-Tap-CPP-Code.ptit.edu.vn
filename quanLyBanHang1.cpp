#include<bits/stdc++.h>
using namespace std;

int x = 0, y = 0, z = 0;
class KH {
public:
	string makh, tenkh, gt, ns, dc;
};
class MH {
public:
	string mamh, tenmh, dvt;
	int gm, gb;
};
KH kh[35];
MH mh[55];

class KhachHang{
	private:
		string makh, ten, gt, ns, dc;
	public:
		static int cnt;
		friend istream& operator >> (istream& cin, KhachHang &a){
			a.cnt++;
			a.makh = "KH" + string(3-to_string(a.cnt).size(), '0') + to_string(a.cnt);
			getline(cin >> ws, a.ten);
			getline(cin >> ws, a.gt);
			getline(cin >> ws, a.ns);
			getline(cin >> ws, a.dc);
			kh[x].makh = a.makh;
			kh[x].tenkh = a.ten;
			kh[x].dc = a.dc;
			x++;
			return cin;
		}
};
int KhachHang::cnt = 0;

class MatHang{
	private:
		string mamh, ten, dvt;
		int gm, gb;
	public:
		static int cnt;
		friend istream& operator >> (istream& cin, MatHang &a){
			a.cnt++;
			a.mamh = "MH" + string(3-to_string(a.cnt).size(), '0') + to_string(a.cnt);
			getline(cin >> ws, a.ten);
			getline(cin >> ws, a.dvt);
			cin >> a.gm >> a.gb;
			mh[y].mamh = a.mamh;
			mh[y].tenmh = a.ten;
			mh[y].dvt = a.dvt;
			mh[y].gm = a.gm;
			mh[y].gb = a.gb;
			y++;		
			return cin;
		}
};
int MatHang::cnt = 0;

class HoaDon{
	private:
		string mahd, makh, mamh;
		int sl;
	public:
		static int cnt;
		friend istream& operator >> (istream& cin, HoaDon &a){
			a.cnt++;
			a.mahd = "HD" + string(3-to_string(a.cnt).size(), '0') + to_string(a.cnt);
			cin >> a.makh >> a.mamh >> a.sl;
			return cin;
		}
		int getSl(){
			return sl;
		}
		friend ostream& operator << (ostream& cout, HoaDon a){
			cout << a.mahd << " ";
			for(int i=0; i<x; i++){
				if(a.makh == kh[i].makh){
					cout << kh[i].tenkh << " "
						 << kh[i].dc << " ";
				}
			}
			for(int i=0; i<y; i++){
				if(a.mamh == mh[i].mamh){
					cout << mh[i].tenmh << " "
						 << mh[i].dvt << " "
						 << mh[i].gm << " "
						 << mh[i].gb << " "
						 << a.getSl() << " "
						 << (long long) a.getSl() * mh[i].gb << endl;
				}
			}
			return cout;
		}
};
int HoaDon::cnt = 0;

int main(){
	KhachHang dskh[25];
	MatHang dsmh[45];
	HoaDon dshd[105];
	int N, M, K, i;
	cin >> N;
	for(i=0; i<N; i++) cin >> dskh[i];
	cin >> M;
	for(i=0; i<M; i++) cin >> dsmh[i];
	cin >> K;
	for(i=0; i<K; i++) cin >> dshd[i];
	
	for(i=0; i<K; i++) cout << dshd[i];
	return 0;
}
