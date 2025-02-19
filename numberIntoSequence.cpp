#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<pair<ll, ll>> primos;
		for(ll i = 2; i * i <= n; i++){
			ll cont = 0LL;
			while(n % i == 0){
				cont++;
				n /= i;
			}
			if(cont > 0LL){
				primos.push_back({cont, i});
			}
		}
		if(n > 1)
			primos.push_back({1, n});
		sort(primos.rbegin(), primos.rend());
		vector<ll> resposta(primos[0].first, primos[0].second);
		for(int i = 1; i < (int)primos.size(); i++){
			for(int j = 0; j <  primos[i].first;j++){
				resposta.back() *= primos[i].second;
			}
		}
		cout << (int)resposta.size() << "\n";
		for(auto it: resposta){
			cout<<it<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
