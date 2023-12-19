#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma = "B20DCCN";
	string ten, lop, ns;
	double gpa;
};
void nhap(SinhVien ds[], int N){
	for(int i=0; i<N; i++){
		ds[i].ma += (string(3-to_string(i+1).size(), '0') + to_string(i+1));
		cin.ignore(); getline(cin, ds[i].ten);
		
		transform(ds[i].ten.begin(), ds[i].ten.end(), ds[i].ten.begin(), ::tolower);
		stringstream ss(ds[i].ten);
		string tmp; ds[i].ten="";
		while(ss >> tmp){
			tmp[0]=toupper(tmp[0]); tmp+=" ";
			ds[i].ten += tmp;
		}
		
		cin >> ds[i].lop >> ds[i].ns >> ds[i].gpa;
		if(ds[i].ns[1] == '/') ds[i].ns = "0" + ds[i].ns;
		if(ds[i].ns[4] == '/') ds[i].ns.insert(3, "0");
	}
}
void in(SinhVien ds[], int N){
	for(int i=0; i<N; i++){
		cout << ds[i].ma << " "
			 << ds[i].ten << " "
			 << ds[i].lop << " "
			 << ds[i].ns << " "
			 << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}
int main(){
	struct SinhVien ds[50];
	int N;
	cin >> N;
	nhap(ds, N);
	in(ds, N);
	return 0;
}
