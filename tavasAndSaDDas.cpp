#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int conta(ll a){
	int cont = 0;
	while(a > 0){
		cont++;
		a/=10;
	}
	return cont;
}
 
ll func(ll a){
	ll aux = 0LL;
	int cont = 0;
	while(a > 0){
		if(a % 10 == 7){
			aux |= (1LL << cont);
		}
		cont++;
		a /= 10;
	}
	return aux;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll a;
	cin >> a;
	int cont = conta(a);
	ll resultado = 0LL;
	
	for(int i = 1; i < cont; i++){
		resultado += (ll)pow(2LL, i);
	}  
	resultado += func(a);
	resultado++;
	cout << resultado << "\n";
	return 0;
}	
