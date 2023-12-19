 #include<iostream>
 using namespace std;
 int main(){
 	int t; cin >> t;
 	while(t--){
 		long long n, k, sum=0; cin >> n >> k;
 		for(int i=1; i<=n; i++) sum+=i%k;
 		cout << ((k==sum)?1:0) << endl;
	 }
 	return 0;
 }
