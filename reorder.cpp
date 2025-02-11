#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int aux, cont = 0;
		for(int i = 0; i < n; i++){
			cin >> aux;
			cont += aux;
		}
		if(cont == m)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
