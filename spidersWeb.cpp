#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);	
	cin.tie(0);
	int n;
	cin >> n;
	vector<vector<int>> v(n);
	for(int i = 0; i < n; i++){
		int k;
		cin>>k;
		for(int j = 0; j < k; j++){
			int aux;
			cin >> aux;
			v[i].push_back(aux);
		}
	}
	for(int i = 0; i < n; i++){
		sort(v[i].begin(), v[i].end());
	}
	int aux1, aux2;
	long long resultado = 0LL;
	for(int i = 0; i < n; i++){
		if(i == 0)
			aux1 = n - 1;  
		else	
			aux1 = i - 1; 
		if(i == n - 1)
			aux2 = 0;
		else
			aux2 = i + 1;
		for(int j = 0; j < v[i].size() - 1; j++){
			int a, b, cont1 = 0, cont2 = 0, it1 = 0, it2 = 0, r1 = 0, r2 = 0;
			a = v[i][j];
			b = v[i][j + 1];
			while(it1 < v[aux1].size() && v[aux1][it1] < a){
				it1++;
			}
 
			if(it1 < v[aux1].size()){
				r1 = it1;  
				while(it1 < v[aux1].size() && v[aux1][it1] < b){
					it1++;
				}
				it1--;
				if(it1 < v[aux1].size() && it1 >= r1){	
					cont1 = it1 - r1 + 1;	
				}
			}
		
			while(it2 < v[aux2].size() && v[aux2][it2] < a){
				it2++;
			}
 
			if(it2 < v[aux2].size()){
				r2 = it2;  
				while(it2 < v[aux2].size() && v[aux2][it2] < b){
					it2++;
				}
				it2--;
				if(it2 < v[aux2].size() && it2 >= r2){	
					cont2 = it2 - r2 + 1;	
				}
			}
			if(cont1 != cont2) resultado++;
		}
	}
	cout << resultado << "\n";
	return 0;
}
