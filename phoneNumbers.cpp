#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int aux = n/11;
	int cont = 0;
	for(auto it: s){
		if(cont == aux)
			break;
		if(it == '8')
			cont++;
		
	}
	cout << cont << "\n"; 
	return 0;
}
