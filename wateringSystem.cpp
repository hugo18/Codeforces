#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n, a, b;
	cin >> n >> a >> b;
	vector<ll> v(n - 1);
	ll ac = 0LL;
	ll primeiro;
	cin >> primeiro;
	ac += primeiro;
	for(auto &it: v){ 
		cin >> it;
		ac += it;
	}
	ll cont = (primeiro * a) / b;
	sort(v.rbegin(), v.rend());
	
	ll resposta = 0LL;
	int i = 0;
	while(cont < ac){
		ac -= v[i++];
		resposta++;
	}
	cout << resposta << "\n"; 
	
	return 0;
}
 
