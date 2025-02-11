#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, m;
	cin >> n >> m;
	ll aux1 = n - m + 1LL;
	ll maximo = (aux1-1LL) * (aux1)/2LL;
	ll aux2 = n/m, resto = n % m;
	ll minimo = (m - resto) * ((aux2 - 1) * aux2/2);    
	minimo += resto * ((n/m + 1) * (n/m)/2);
	
	cout << minimo << " " << maximo << "\n";
	return 0;
}
