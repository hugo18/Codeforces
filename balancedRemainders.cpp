#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		int cont0=0, cont1=0, cont2=0;
		for(int i=0; i<n; i++){
			int aux;
			cin>>aux;
			if(aux % 3 == 0) cont0++;
			else if(aux % 3 == 1) cont1++;
			else cont2++;
		}
		int aux = n/3;
		int res = 0, c0 = cont0 - aux, c1 = cont1 - aux, c2 = cont2 - aux;
		if(c0 > 0){
			if(c1 < 0 && c2 < 0){
				res += (-c1);
				res += 2 * (-c2);
			}
			else if(c1 < 0){
				res += (c0);
				c0 = 0;
				c1 += c0;
			}
			else if(c2 < 0){
				res += 2*(c0);	
				c0 = 0;
				c2 += c0;
			}
		}	
		if(c1 > 0){
			if(c0 < 0 && c2 < 0){
				res += 2 * (-c0);
				res +=(-c2);
			}
			else if(c0 < 0){
				res += 2 * (c1);
				c1 = 0;
				c0 += c1;	
			}
			else if(c2 < 0){
				res +=(c1);
				c1 = 0;
				c2 += c1;	
			}
		}	
 		if(c2 > 0){
			if(c0 < 0 && c1 < 0){
				res +=(-c0);
				res += 2 * (-c1);
			}
			else if(c0 < 0){
				res +=(c2);
				c2 = 0;
				c0 += c2;
			}
			else if(c1 < 0){
				res += 2 * (c2);
				c2 = 0;
				c1 += c2;	
			}
		}	
 		cout << res << "\n";
 	}
	return 0;
}
