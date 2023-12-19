#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		double xA, yA, xB, yB;
		cin >> xA >> yA >> xB >> yB;
		cout << fixed << setprecision(4) << sqrt(pow(xA-xB, 2)+pow(yA-yB, 2)) << endl;
	}
	return 0;
}
