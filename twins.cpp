#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	int soma = 0;
	for(auto &it: v){ 
		cin >> it;
		soma += it;
	}
	sort(v.rbegin(), v.rend());
	int aux = 0, cont = 0;
	for(auto it: v){
		cont++;
		aux += it;
		soma -= it;
		
		if(aux > soma)
			break;
		
	}
	cout << cont << "\n";
	return 0;
}

