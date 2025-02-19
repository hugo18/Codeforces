#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
	int n;
	cin >> n;
	vector<int> v(n);
	int pares = 0, impares = 0; 
	for(int i = 0; i < n; i++){
		cin >> v[i];
		if(v[i] % 2 == 0) pares++;
		else impares++;
		
	}
	
	if(pares >= impares)
		cout << impares << "\n";
	else
		cout << pares << "\n";
	
	return 0;
}
 
 
