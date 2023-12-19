#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n];
		vector<int> r;
		vector<int> c(n, 0);
		for(int i=0; i<n; i++){
			int tmp=0;
			for(int j=0; j<n; j++){
				cin >> a[i][j];
				tmp+=a[i][j];
				c[j]+=a[i][j];
			}
			r.push_back(tmp);
		}
		int res1 = *max_element(r.begin(), r.end()) - *min_element(r.begin(), r.end());
		int res2 = *max_element(c.begin(), c.end()) - *min_element(c.begin(), c.end());
		if(res1>res2) cout << n*(*max_element(r.begin(), r.end())) - accumulate(r.begin(), r.end(), 0) << endl;
		else cout << n*(*max_element(c.begin(), c.end()))- accumulate(c.begin(), c.end(), 0) << endl;
	}
	return 0;
}
