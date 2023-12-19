#include<iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string code; cin >> code;
		for(int i=0; i<code.size(); i++){
			if(code[i]=='0' && code[i+1]=='8' && code[i+2]=='4') { i=i+2; continue;}
			cout << code[i];
		}
		cout << endl;
	}
	return 0;
}
