#include<bits/stdc++.h>
using namespace std;
int main(){
	
	ifstream filein;
	filein.open("PTIT.in");
	ofstream fileout;
	fileout.open("PTIT.out");
	
	while(!filein.eof()){
		string s; getline(filein, s);
		fileout << s << endl;
	}
	
	fileout.close();
	filein.close();
	system("pause");
	return 0;
}
