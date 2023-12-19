#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		multiset <int> a;
		for(int i=0; i<n; i++){
			int tmp; cin >> tmp;
			a.insert(tmp);
		}
		if(binary_search(a.begin(), a.end(), x)) cout << 1 << endl;
		else cout << -1 << endl;
	}
	return 0;
}
