#include <bits/stdc++.h>
using namespace std;
const int mod = (int)1e9 + 7;
vector<int> dp(200010, -1);
 
int resolve(int i){
	if(i >= 0 && i <= 8) return 2;
	else if(i == 9) return 3;
	else if(dp[i] != -1) return dp[i];
	else{
		dp[i] = ((resolve(i - 9) % mod) + (resolve(i - 10) % mod) % mod);  
		return dp[i];
	}
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string n; 
		int m;
		cin >> n >> m;
		int res = 0;
		for(int i = 0; i < (int)n.size(); i++){
			int aux = n[i] - '0';
			if(10 - aux <= m){
				res += (resolve(m - (10 - aux)) % mod);
				res %= mod;
			}else{
				res++;
				res %= mod;
			}
		}
		cout<< res % mod <<"\n";
	}
 
	return 0;
}
