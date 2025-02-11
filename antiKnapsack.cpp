#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int cont = 0;
		cont += (n - k);
		int aux = ((k-1) - ((k - 1)/2));
		cont += aux;
		cout << cont << "\n";
		if(cont > 0){
			for(int i = n; i > k; i--){
				cout << i << " ";
			}
			for(int i = k - 1; aux > 0 && i > 0; i--){
				cout << i << " ";
				aux--;
			}
			cout << "\n";
		}
	}
	return 0;
}
