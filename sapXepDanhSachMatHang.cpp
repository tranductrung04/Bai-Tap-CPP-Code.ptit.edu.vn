#include<bits/stdc++.h>
using namespace std;
struct Product{
	int id;
	string name, group;
	double purchasePrice, salePrice, profit;
};
void input(Product list[], int n){
	for(int i=0; i<n; i++){
		list[i].id = i+1;
		cin.ignore(); getline(cin, list[i].name);
		getline(cin, list[i].group);
		cin >> list[i].purchasePrice >> list[i].salePrice;
		list[i].profit = list[i].salePrice - list[i].purchasePrice;
	}
}
bool cmp(Product a, Product b){
	return a.profit > b.profit;
}
void sort_list(Product list[], int n){
	sort(list, list+n, cmp);
}
void output(Product list[], int n){
	for(int i=0; i<n; i++){
		cout << list[i].id << " "
			 << list[i].name << " "
			 << list[i].group << " "
			 << fixed << setprecision(2) << list[i].profit << endl;
	}
}
int main(){
	int n; cin >> n;
	struct Product list[n];
	input(list, n);
	sort_list(list, n);
	output(list, n);
	return 0;
}
