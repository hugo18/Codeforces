#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, d;
	cin >> n >> d;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	int cont = 0;
	for(int i = 1; i < n; i++){
		if(v[i - 1] >= v[i]){
			int aux = v[i-1] - v[i];
			aux++;
			if(aux % d > 0)
				aux += (d - (aux % d));
			v[i] += aux;
			cont += (aux/d);
		}
	}
	cout << cont << "\n";
	return 0;
}
