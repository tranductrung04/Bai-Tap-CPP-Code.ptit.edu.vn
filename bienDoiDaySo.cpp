#include<bits/stdc++.h>
using namespace std;

int cnt=0;
void merge(vector<int> &a, int x, int flag){
	if(flag){
		a[x] += a[x+1];
		a.erase(a.begin()+x+1);
	}else{
		a[x] += a[x-1];
		a.erase(a.begin()+x-1);
	}
	cnt++;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		for(auto &i : a) cin >> i;
		int l=0, r=a.size()-1;
		while(l < r){
			if(a[l] == a[r]){ l++; r--;}
			else if(a[l] < a[r]) {merge(a, l, 1); r--;}
			else if(a[r] < a[l]) {merge(a, r, 0); r--;}
		}
		cout << cnt << endl; cnt=0;
	}
	return 0;
}
