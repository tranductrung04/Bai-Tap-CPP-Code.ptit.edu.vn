#include<bits/stdc++.h>
using namespace std;

class KH{
	public:
		string makh, tenkh, dc;
};
class MH{
	public:
		string mamh, tenmh, dvt;
		long long gm, gb;
};
class HD{
	public:
		string mahd, tenkh, dc, tenmh;
		long long gm, gb, slhd, tt, ln;
};
KH kh[35];
MH mh[55];
HD hd[115];
int x=0, y=0, z=0, c=0;

class KhachHang{
	private:
		string ma, ten, gt, ns, dc;
	public:
		static int cnt;
		friend istream& operator >> (istream& cin, KhachHang &a){
			a.cnt++;
			a.ma = "KH" + string(3-to_string(a.cnt).size(), '0') + to_string(a.cnt);
			getline(cin >> ws, a.ten);
			getline(cin >> ws, a.gt);
			getline(cin >> ws, a.ns);
			getline(cin >> ws, a.dc);
			kh[x].makh = a.ma;
			kh[x].tenkh = a.ten;
			kh[x].dc = a.dc;
			x++;
			return cin;
		}
};
int KhachHang::cnt = 0;

class MatHang{
	private:
		string ma, ten, dvt;
		long long gb, gm;
	public:
		static int cnt;
		friend istream& operator >> (istream& cin, MatHang &a){
			a.cnt++;
			a.ma = "MH" + string(3-to_string(a.cnt).size(), '0') + to_string(a.cnt);
		 	getline(cin >> ws , a.ten);
			getline(cin >> ws, a.dvt);
			cin >> a.gm >> a.gb;
			mh[y].mamh = a.ma;
			mh[y].tenmh = a.ten;
			mh[y].gm = a.gm;
			mh[y].gb = a.gb;
			y++;
			return cin;
		}
};
int MatHang::cnt = 0;

class HoaDon{
	private:
		string ma, makh, mamh;
		long long sl;
	public:
		static int cnt;
		friend istream& operator >> (istream& cin, HoaDon &a){
			cin >> a.makh >> a.mamh >> a.sl;
			a.cnt++;
			a.ma = "HD" + string(3-to_string(a.cnt).size(), '0') + to_string(a.cnt);
			hd[z].mahd = a.ma;
			hd[z].slhd = a.sl;
			for(int i=0; i<x; i++){
				if(a.makh == kh[i].makh){
					hd[z].tenkh = kh[i].tenkh;			
					hd[z].dc = kh[i].dc;
				} 
			}
			for(int i=0; i<y; i++){
				if(a.mamh == mh[i].mamh){
					hd[z].tenmh = mh[i].tenmh;
					hd[z].gm = mh[i].gm;
					hd[z].gb = mh[i].gb;
					hd[z].tt = mh[i].gb * hd[z].slhd;
					hd[z].ln = hd[z].tt - (mh[i].gm * hd[z].slhd);
				}
			}
			z++;
			return cin;
		}
		friend ostream& operator << (ostream& cout, HoaDon& a){
			cout << hd[c].mahd << " "
				 << hd[c].tenkh << " "
				 << hd[c].dc << " "
				 << hd[c].tenmh << " "
				 << hd[c].slhd << " "
				 << hd[c].tt << " "
				 << hd[c].ln << endl;
				 c++;
			return cout;
		}
};
int HoaDon::cnt = 0;

bool cmp(HD a, HD b){
	return a.ln >= b.ln;
}
void SapXep(HD hd[], int z){
	sort(hd, hd+z, cmp);
}	
void sapxep(HoaDon dshd[], int K){
 	SapXep(hd, z);	
}

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
	
	sapxep(dshd, K);
	
	for(i=0; i<K; i++) cout << dshd[i];
	return 0;
}
