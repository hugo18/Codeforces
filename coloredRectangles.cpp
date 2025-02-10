#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int r, g, b;
vector<ll> vr(202), vg(202), vb(202);
vector<vector<vector<ll>>> dp(202, vector<vector<ll>>(202, vector<ll>(202, -1LL)));
 
ll resolve(int i, int j, int k){
	if(dp[i][j][k] != -1LL){ 
		return dp[i][j][k];
	}
	if(i >= r && j < g && k < b){
		dp[i][j][k] = (vg[j] * vb[k]) + resolve(i, j+1, k+1);
		return dp[i][j][k];
	}	
	
	else if(i < r && j >= g && k < b){
		dp[i][j][k] =  (vr[i] * vb[k]) + resolve(i+1, j, k+1);
		return dp[i][j][k];
	}
	else if(i < r && j < g && k >= b){
		dp[i][j][k] = (vr[i] * vg[j]) + resolve(i+1, j+1, k);
		return dp[i][j][k];
	}
	else if((i >= r && j >= g) || (i >= r && k >= b) || (j >= g && k >= b)){
		return 0LL;
	}
	else{
		ll aux1, aux2, aux3;
		aux1 = (vr[i] * vg[j]) + resolve(i+1, j+1, k);
		aux2 = (vr[i] * vb[k]) + resolve(i+1, j, k+1);
		aux3 = (vg[j] * vb[k]) + resolve(i, j+1, k+1);
		if(aux1 > aux2) swap(aux1, aux2);
		if(aux2 > aux3) swap(aux2, aux3);
		if(aux1 > aux2) swap(aux1, aux2);
		dp[i][j][k] = aux3;
		return dp[i][j][k];
	}	
}	
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>r>>g>>b;
	
	for(int i = 0; i < r; i++)
		cin >> vr[i];
	for(int i = 0; i < g; i++)
		cin >> vg[i];
	for(int i = 0; i < b; i++)
		cin >> vb[i];
	sort(vr.rbegin(), vr.rend());
	sort(vg.rbegin(), vg.rend());
	sort(vb.rbegin(), vb.rend());
	ll res = resolve(0, 0, 0);
	cout << res << "\n";
	
	return 0;
}
