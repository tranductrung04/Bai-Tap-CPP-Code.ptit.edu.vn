#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238

struct TamGiac{
	double xa, ya, xb, yb, xc, yc;
	double a, b, c, s, r;
};
void nhap(TamGiac ds[], int n){
	for(int i=0; i<n; i++){
		cin >> ds[i].xa >> ds[i].ya
			>> ds[i].xb >> ds[i].yb
			>> ds[i].xc >> ds[i].yc;
	}
}
bool check(double a, double b, double c){
	return (a+b > c) && (a+c > b) && (b+c > a); 
}
void tinh(TamGiac ds[], int n){
	for(int i=0; i<n; i++){
		ds[i].a = sqrt(pow(ds[i].xb - ds[i].xc, 2) + pow(ds[i].yb - ds[i].yc, 2));
		ds[i].b = sqrt(pow(ds[i].xa - ds[i].xc, 2) + pow(ds[i].ya - ds[i].yc, 2));
		ds[i].c = sqrt(pow(ds[i].xa - ds[i].xb, 2) + pow(ds[i].ya - ds[i].yb, 2));
		if(check(ds[i].a, ds[i].b, ds[i].c)){
			ds[i].s = (sqrt((ds[i].a + ds[i].b + ds[i].c)
						* (ds[i].a + ds[i].b - ds[i].c)
						* (ds[i].b + ds[i].c - ds[i].a)
						* (ds[i].c + ds[i].a - ds[i].b))) / 4;		
			ds[i].r = (ds[i].a * ds[i].b * ds[i].c)/(4 * ds[i].s);
			cout << fixed << setprecision(3) << PI*pow(ds[i].r, 2) << endl;
		}else
			cout << "INVALID" << endl;
	}
}
int main(){
	int n; cin >> n;
	struct TamGiac ds[n];
	nhap(ds, n);
	tinh(ds, n);
	return 0;
}

