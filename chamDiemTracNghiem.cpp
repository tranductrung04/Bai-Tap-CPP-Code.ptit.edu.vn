#include<iostream>
#include<iomanip>
using namespace std;
double check(char code[]){
	double result=0;
	char ans[15];
	for(int i=0; i<15; i++){ cin >> ans[i]; if(code[i]==ans[i]) result+=(2.00/3.00);}
	return result;
}
int main(){
	int t; cin >> t;
	while(t--){
		int code; cin >> code;
		char code101[15]={'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B','D'},
			 code102[15]={'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B','B'};
		cout << fixed << setprecision(2) << ((code==101)?check(code101):check(code102)) << endl;
	}
	return 0;
}
