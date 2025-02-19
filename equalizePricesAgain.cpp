#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		ll n;
		cin >> n;
		ll cont = 0LL;
		for(int i = 0; i < n; i++){
			ll aux;
			cin >> aux;
			cont += aux;
		}
		ll resposta = cont/n;
		if(resposta * n  < cont)
			resposta++;
		cout << resposta << "\n";
	}
	return 0;
}
