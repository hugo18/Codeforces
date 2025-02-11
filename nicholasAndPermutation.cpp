#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	int maximo, minimo;
	for(int i = 0; i < n; i++){
		cin >> v[i];
		if(v[i] == n)
			maximo = i;
		else if(v[i] == 1)
			minimo = i;
	}
	int res = 0;
	int maior = max(minimo, maximo);
	int menor = min(minimo, maximo);
	res = max(res, n - 1 - menor);
	res = max(res, maior);
	cout << res << "\n";
	return 0;
}
