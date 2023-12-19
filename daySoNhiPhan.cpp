#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> b[i];
		int maxLen = 0, d[2*n+1], sum1 = 0, sum2 = 0;
		memset(d, -1, sizeof(d));
		for(int i=0; i<n; i++){
			sum1 += a[i]; sum2 += b[i];
			int diff = sum1 - sum2;
			int firstIdx = diff + n;
			if(diff == 0) maxLen = i+1;
			else if(d[firstIdx] == -1) d[firstIdx] = i;
			else{
				int len = i - d[firstIdx];
				maxLen = max(len, maxLen);
			}
		}
		cout << maxLen << endl;
	}
	return 0;
}

