#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; 
	cin >> n;
	map<int, int> m;
	int maximo = 0, minimo = ((int)1e9) + 1;
 
	for(int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		maximo = max(maximo, aux);
		minimo = min(minimo, aux);
		m[aux]++;
	}
	if(n <= 2 || maximo == minimo || maximo == (minimo-1)){ 
		cout << "0\n";	
	}else{
		int res = 0;
		for(auto it: m){
			if((it.first != maximo) && (it.first != minimo)){
				res += it.second;
			}
		}
		cout << res << "\n";
	}
	
 
	return 0;
}
