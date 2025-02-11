#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
 
	int n, m;
	cin >> n >> m;
	vector<ll> linhasZero(n, 0LL), linhasUm(n, 0LL), colunasZero(m, 0LL), colunasUm(m, 0LL);
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			ll aux;
			cin >> aux;
			if(aux == 0LL){
				linhasZero[i]++;
				colunasZero[j]++;
			}else{
				linhasUm[i]++;
				colunasUm[j]++;
			}
		}
	}
	ll resposta = n * m;
	for(auto it: linhasUm){
		//cout << it << "\n";
		if(it > 1LL){
			resposta += (ll)pow(2, it) - 1LL - it;
		}
	}
	for(auto it: linhasZero){
		//cout << it << "\n";
		if(it > 1LL){
			resposta += (ll)pow(2, it) - 1LL - it;
		}
	}
	for(auto it: colunasUm){
		//cout << it << "\n";
		if(it > 1LL){
			resposta += (ll)pow(2, it) - 1LL - it;
		}
	}
	for(auto it: colunasZero){
		//cout << it << "\n";
		if(it > 1LL){
			resposta += (ll)pow(2, it) - 1LL - it;
		}
	}
	cout << resposta << "\n";
	return 0;
}
