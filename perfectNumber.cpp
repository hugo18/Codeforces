#include <bits/stdc++.h>
 
using namespace std;
int fun(int n){
	int cont = 0;
	while(n > 0){
		cont += (n % 10);
		n /= 10;
	}
	return cont;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, aux = 18;
	cin >> n;
	
	while(n){
		aux++;
		if(fun(aux) == 10) n--;
	}
	cout << aux << "\n";
	return 0;
}
