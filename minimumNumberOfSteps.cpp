#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	ll mod = 1000000007LL;
	ll res = 0LL, aux = 1LL;
	for(auto it: s){
		if(it == 'a')
			aux = (2LL * aux) % mod;
		else{
			res += (aux - 1LL);
			res %= mod;
		}
	}
	cout << res << "\n";
	return 0;
}
