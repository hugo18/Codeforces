#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		vector<int> v(n + 1);
		for(int i = 1; i <= n; i++){
			cin >> v[i];
		}
		vector<int> resposta(n);
		for(int i = 1; i <= n; i++){
			int j = i;
			int cont = 1;
			while(v[j] != i){
				j =  v[j];
				cont++;
			}
			resposta[i - 1] = cont;
		}
		for(auto it: resposta){
			cout << it << " ";
		}
		cout<<"\n";
	}
}
