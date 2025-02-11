#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin >> n >> k;
		char aux = 'a';
		int cont = 0;
		for(int i = 0; i < n; i++){
			cout << aux;
			cont++;
			if(cont == k){
				aux++;  
				if(aux == 'd')
					aux = 'a';
				cont = 0;
			}
		}
		cout << "\n";
	}
	return 0;
}
