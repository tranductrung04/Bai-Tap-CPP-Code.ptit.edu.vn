#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string ma, ten, gt, ns, dc, mst, hd;
};
int cnt=0;
void nhap(NhanVien &a){
 	a.ma += (string(5-to_string(cnt+1).size(), '0') + to_string(cnt+1));
 	cnt++;
	scanf("\n"); getline(cin, a.ten);
	cin >> a.gt >> a.ns;
	scanf("\n"); getline(cin, a.dc);
	cin >> a.mst >> a.hd;
}
bool cmp(NhanVien a, NhanVien b){
	int sum1 = stoi(a.ns.substr(0, 2))*30 
			 + stoi(a.ns.substr(3, 2)) 
			 + stoi(a.ns.substr(6))*365;
	int sum2 = stoi(b.ns.substr(0, 2))*30 
			 + stoi(b.ns.substr(3, 2)) 
			 + stoi(b.ns.substr(6))*365;	
	return sum1 < sum2;
}
void sapxep(NhanVien ds[], int N){
	sort(ds, ds+N, cmp);
}
void inds(NhanVien ds[], int N){
	for(int i=0; i<N; i++){
		cout << ds[i].ma << " "
			 << ds[i].ten << " "
			 << ds[i].gt << " "
			 << ds[i].ns << " "
			 << ds[i].dc << " "
			 << ds[i].mst << " "
			 << ds[i].hd << endl;
	}
}
int main(){
	struct NhanVien ds[50];
	int N, i;
	cin >> N;
	for(int i=0; i<N; i++) nhap(ds[i]);
	sapxep(ds, N);
	inds(ds, N);
	return 0;
}
