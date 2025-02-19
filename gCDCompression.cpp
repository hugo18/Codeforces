#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n, a = 0, b = 0;
		cin >> n;
		vector<int> par, impar;
		for(int i = 0; i < (2 * n); i++){
			int aux;
			cin >> aux;
			if(aux % 2 == 0){
				par.push_back(i + 1);
				a++;
			}else{
				impar.push_back(i + 1);
				b++;
			}
		}
		
		if(a % 2 == 0){
			if(a >= b)
				a -= 2;
			else
				b -= 2;
		}else{
			a--;
			b--;
		}
		for(int i = 0; i < a; i += 2){
			cout << par[i] << " " << par[i + 1] << "\n";
		}
		for(int i = 0; i < b; i += 2){
			cout << impar[i] << " " << impar[i + 1] << "\n";
		}
	}
	return 0;
}
