#include<bits/stdc++.h>
using namespace std;

int MaxHist(int a[], int m){
	int maxArea = 0, res = 0;
	stack<int> st;
	int i=0; 
	while(i<m){
		if(st.empty() || a[i] >= a[st.top()]) st.push(i++);
		else{
			int pos = st.top();
			st.pop();
			res = a[pos] * i;
			if(!st.empty()){
				res = a[pos] * (i - st.top() - 1);
			}
			maxArea = max(maxArea, res);			
		}
	}
	while(!st.empty()){
			int pos = st.top();
			st.pop();
			res = a[pos] * i;
			if(!st.empty()){
				res = a[pos] * (i - st.top() - 1);
			}
			maxArea = max(maxArea, res);			
	}
	return maxArea;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[20][20], res = INT_MIN;
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++) cin >> a[i][j];
		for(int i=1; i<n; i++){
			for(int j=0; j<m; j++)
				if(a[i][j]) a[i][j] += a[i-1][j];
		}
		for(int i=0; i<n; i++) sort(a[i], a[i]+m);
		for(int i=0; i<n; i++)
			res = max(res, MaxHist(a[i], m));
		cout << res << endl;	
	}
	return 0;
}
