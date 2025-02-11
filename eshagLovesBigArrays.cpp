#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		int minimo = 1000;
		for(int i = 0; i < n; i++){
			cin >> v[i];
			minimo = min(minimo, v[i]);
		}
		int cont = 0;
		for(auto it: v){
			if(it > minimo) cont++;
		}
		cout << cont << "\n";
	}
	return 0;
}
