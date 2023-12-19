#include<bits/stdc++.h>
using namespace std;

struct Time{
	int h, m, s;
};
void in(Time list[], int n){
	for(int i=0; i<n; i++){
		cin >> list[i].h >> list[i].m >> list[i].s;
	}
}
bool cmp(Time a, Time b){
	int sum1 = a.h*60*60 + a.m*60 + a.s;
	int sum2 = b.h*60*60 + b.m*60 + b.s;
	return sum1 < sum2;
}
void sort_list(Time list[], int n){
	sort(list, list+n, cmp);
}
void out(Time list[], int n){
	for(int i=0; i<n; i++){
		cout << list[i].h << " "
			 << list[i].m << " "
			 << list[i].s << endl;
	}
}
int main(){
	int n; cin >> n;
	struct Time list[n];
	in(list, n);
	sort_list(list, n);
	out(list, n);
	return 0;
}
