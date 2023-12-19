#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	for(int i=0; i<s.size(); i++){
		if(s[i]<'0' || s[i]>'9') return false;
	}
	return true;
}
int sti(string s){
	int x=0;
	for(char &c : s){
		x = x*10 + c-'0';
	}
	return x;
}
int main(){
	ifstream filein; filein.open("DATA.in");
	
	long long sum=0;
	while(!filein.eof()){
		string s; filein >> s;
		if(s.size()<=9 && check(s)) { sum+=sti(s); }
	}
	cout << sum << endl;
	
	filein.close();
	system("pause");
	return 0;
}
