#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<string> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	int res = (int)1e9;
	
	for(int i = 0; i < n; i++){
		int cont = 0;
		for(int j = 0; j < n; j++){
			if(i == j) continue;
			string aux = v[j];
			int k = 0;
			while(v[i] != aux){
				k++;
				if(k >= (int)v[i].size()){
          			cout<<"-1\n";
          			return 0;
        		}
				aux = "";
				for(int l = k; l < (int)v[j].size(); l++){
					aux += v[j][l]; 	
					
				}
				for(int l = 0; l < k; l++){
					aux += v[j][l];
				}
			}
			cont += k;
		}
		res = min(res, cont); 
	}
	cout << res << "\n";
	return 0;
}
