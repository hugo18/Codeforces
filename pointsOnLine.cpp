#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, d;
	cin >> n >> d;
	vector<ll> v(n);
	for(auto &it: v) cin >> it;
	if(n < 3){
		cout << "0\n";
	}else{
		ll res = 0LL;
		ll j = 2LL;
		for(ll i = 0LL; i < (n - 2LL); i++){
			while(j < n && v[j] - v[i] <= d){
				j++;
			}
			j--;
			res += ((j - i - 1LL) * (j - i))/2LL;
		}	
		cout << res << "\n";
	}
	
	return 0;
}
