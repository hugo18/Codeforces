#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, b, p;
	cin >> n >> b >> p;
	
	p *= n;
	int i = 0;
	int cont = 0;
	while(n > 1){
		while(pow(2, i) <= n){
			i++;
		}
		i--;	
		n -= pow(2, i);
		n += pow(2, i)/2;
		cont += pow(2, i)/2;
	}
	cout << (2 * b + 1) * cont <<" "<< p << "\n";     
	return 0;

