#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	if(n < m) cout << "-1\n";
	else if(n == m) cout << n << "\n";
	else{
		int resultado = n/2;
		if(n % 2 != 0)
			resultado++;
		if(resultado % m != 0){
			resultado += (m - (resultado % m));
		}
		cout << resultado << "\n";
	}
	return 0;
}
