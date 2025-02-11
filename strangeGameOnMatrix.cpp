#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	int mat[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){	
			cin >> mat[i][j];
		}
	}
	int res = 0, num = 0;
	int aux, ac, aux1, ac1;
	for(int j = 0; j < m; j++){
		aux = 0;
		ac = 0;
		ac1 = 0;
		for(int i = 0; i < n; i++){
			if(mat[i][j]){
				aux1 = 0;
				for(int m = 0; m < min(k, n - i) ; m++){
					if(mat[i + m][j]){
						aux1++;
						if(aux1 > aux){
							aux = aux1;
							ac = ac1;
						}
					} 
					
				}
				ac1++;	
			}
		}
		res += aux;
		num += ac;
	}	
	cout<<res<<" "<<num<<"\n";
	return 0;
}
