#include<bits/stdc++.h>
using namespace std;
int sum(string s){
	int sum=0;
	for(int i=0; i<s.size(); i++){
		sum+=s[i]-'0';
	}
	return sum;
}
string find_min(string min, int m, int s){
	for(int i=m-1; i>=0; i--){
		while(min[i]!='9') {
			if(sum(min)==s) return min;
			else min[i]++;
		}
	}
	if(min[0]=='9' && sum(min)==s) return min; 
	return "-1";
}
string find_max(string max, int m, int s){
	for(int i=m-1; i>=0; i--){
		while(max[i]!='0') {
			if(sum(max)==s) return max;
			else max[i]--;
		}
	}
	return "-1";  
}
int main(){
	int m, s; cin >> m >> s;
	string min, max;
	min.push_back('1'); max.push_back('9');
	for(int i=1; i<m; i++){
		min.push_back('0');
		max.push_back('9');
	}
	cout << find_min(min, m, s) << " " << find_max(max, m, s);
	return 0;
}
