#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	int resposta = 0, aux = 0, ant = 0;
	
	
	for(auto it: v){
		if(it >= ant){
			aux++;
			resposta = max(resposta, aux);
		}else
			aux = 1;
		ant = it;
	}
	cout << resposta << "\n";
	return 0;
}
