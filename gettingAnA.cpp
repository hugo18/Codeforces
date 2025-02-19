#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	double n;
	cin >> n;
	vector<double> v(n);
	double soma = 0.0; 
	
	for(auto &it: v){ 
		cin >> it; 
		soma += it;
	}
	double resultado = soma/n; 
	double nota = floor(resultado);
	if(resultado - nota >= 0.5)
		nota++;
	if(nota < 5){
		sort(v.begin(), v.end());
		int i = 0;
		while(nota < 5){
			soma -= v[i++];
			soma += 5;
			resultado = soma/n; 
			nota = floor(resultado);
			if(resultado - nota >= 0.5)
				nota++;
		}
		cout << i << "\n";
	}else
		cout << "0\n";
	return 0;
	
}
