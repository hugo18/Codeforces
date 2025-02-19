#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, m;
	cin >> n >> m;	
	vector<ll> v(m);
	for(auto &it : v) cin >> it;
	ll cont = v[0] - 1LL;
	
	for(int i = 1; i < m; i++){
		if(v[i] >= v[i - 1])
			cont += (v[i] - v[i - 1]);
		else
			cont += (n - v[i - 1] + v[i]);
	}
	cout << cont << "\n";
	return 0;
}
 
