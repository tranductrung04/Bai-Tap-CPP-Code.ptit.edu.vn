#include<bits/stdc++.h>
using namespace std;

string chuanHoa(string s){
	stringstream ss(s);
	string token, res = "";
	while(ss >> token){
		res += token; res += " ";
	}
	res.erase(res.size()-1);
	return res;
}

class KhachHang {
private:
    string ma, ten, gt, ns, dc;
public:
    static int cnt;
    void nhap(ifstream& fileKH) {
        cnt++;
        ma = "KH" + string(3 - to_string(cnt).size(), '0') + to_string(cnt);
        getline(fileKH >> ws, ten);
        getline(fileKH >> ws, gt);
        getline(fileKH >> ws, ns);
        getline(fileKH >> ws, dc);
        ten = chuanHoa(ten);
        gt = chuanHoa(gt);
        ns = chuanHoa(ns);
        dc = chuanHoa(dc);
    }
    string getMa() {
        return ma;
    }
    string getTen() {
        return ten;
    }
    string getDc() {
        return dc;
    }
};
int KhachHang::cnt = 0;

class MatHang {
private:
    string ma, ten, dvt;
    int gm, gb;
public:
    static int cnt;
    void nhap(ifstream& fileMH) {
        cnt++;
        ma = "MH" + string(3 - to_string(cnt).size(), '0') + to_string(cnt);
        getline(fileMH >> ws, ten);
        getline(fileMH >> ws, dvt); 	
		ten = chuanHoa(ten); dvt = chuanHoa(dvt);
        fileMH >> gm >> gb;
    }
    string getMa() {
        return ma;
    }
    string getTen() {
        return ten;
    }
    string getDvt() {
        return dvt;
    }
    int getGm() {
        return gm;
    }
    int getGb() {
        return gb;
    }
};
int MatHang::cnt = 0;

class HoaDon {
private:
    KhachHang kh;
    MatHang mh;
    string ma;
    int sl;
public:
    static int cnt;
    HoaDon(KhachHang kh, MatHang mh, int sl) : kh(kh), mh(mh), sl(sl){
        this->sl = sl;
        cnt++;
        ma = "HD" + string(3 - to_string(cnt).size(), '0') + to_string(cnt);
    }
    long long getTt() {
        return (long long)sl * mh.getGb();
    }
    void in() {
        cout << ma << " "
            << kh.getTen() << " "
            << kh.getDc() << " "
            << mh.getTen() << " "
            << mh.getDvt() << " "
            << mh.getGm() << " "
            << mh.getGb() << " "
            << sl << " "
            << getTt() << endl;
    }
};
int HoaDon::cnt = 0;

int main() {
    ifstream fileKH, fileMH, fileHD;
    fileKH.open("KH.in");
    fileMH.open("MH.in");
    fileHD.open("HD.in");

    int n;
    fileKH >> n;
    vector<KhachHang> kh;
    for (int i = 0; i < n; i++) {
    	KhachHang kh1; kh1.nhap(fileKH);
    	kh.push_back(kh1);
	}
	
    int m;
    fileMH >> m;
    vector<MatHang> mh;
    for (int i = 0; i < m; i++){
    	MatHang mh1; mh1.nhap(fileMH);
    	mh.push_back(mh1);
	} 

    int k;
    fileHD >> k;
    vector<HoaDon> hd;
    for (int i = 0; i < k; i++) {
        string maKH, maMH;
        int sl;
        fileHD >> maKH >> maMH >> sl;
        HoaDon tmp =  HoaDon(kh[stoi(maKH.substr(2)) - 1], mh[stoi(maMH.substr(2)) - 1], sl);
        hd.push_back(tmp);
        hd[i].in();
    }

    fileKH.close();
    fileMH.close();
    fileHD.close();
    return 0;
}

