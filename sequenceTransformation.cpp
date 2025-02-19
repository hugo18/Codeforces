#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		vector<int> aux(n + 1, 1);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		auto it = unique(v.begin(), v.end());
		v.erase(it, v.end());
		n = (int)v.size();
		//cout << n << "\n";
		for(int i = 0; i < n; i++){
			aux[v[i]]++;
		}
		aux[v[0]]--;
		aux[v[n - 1]]--;
		int minimo = 1e9;
		for(int i = 0; i < n; i++){
			minimo = min(minimo, aux[v[i]]);
		}
		cout << minimo << "\n";
		
	}
 
	return 0;
}
