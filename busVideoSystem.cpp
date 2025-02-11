#include <bits/stdc++.h>
using namespace std;
using ll = long long;  
 
int main(){
	int n;
	ll w;
	cin >> n >>w;
	vector<ll> v(n);
	for(int i = 0; i < n; i++){
		ll aux;
		cin >> aux;
		v[i] = aux;
		if(i > 0)
			v[i] += v[i - 1];
		
	}
	sort(v.begin(), v.end());
	ll aux1 = v[0] , aux2 = v[n - 1];
	if(aux1 < 0LL && aux2 >= 0LL){
		if(w - aux2 + aux1 + 1LL < 0) cout << "0\n";
		else cout << w - aux2 + aux1 + 1LL << "\n";
	}else if(aux1 >= 0LL && aux2 >= 0LL){
		if(w - aux2 + 1LL < 0LL) cout << "0\n";
		else cout << w - aux2 + 1LL << "\n";
	}else if(aux1 < 0LL && aux2 < 0LL){
		if(w + aux1 + 1LL < 0LL) cout << "0\n";
		else cout << w + aux1 + 1LL << "\n";
	}
	return 0;
}
