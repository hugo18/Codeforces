#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	
	int aux, cont, cont1 = 0;
 
	while(t--){
		cont = 0;
		for(int i = 0; i < 3; i++){
			cin >> aux;
			cont += aux;
		}
		if(cont >= 2)
			cont1++;
	}
	cout << cont1 << "\n";
	return 0;
}
 
