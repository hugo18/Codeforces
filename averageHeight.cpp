#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> impar, par;
		for(int i = 0; i < n; i++){
			int aux;
			cin>>aux;
			if(aux & 1)
				impar.push_back(aux);
			else
				par.push_back(aux);
		}
		for(auto it: impar)
			cout << it <<" ";
		for(auto it: par)
			cout << it <<" ";
		cout << "\n";
	}
	return 0;
}
