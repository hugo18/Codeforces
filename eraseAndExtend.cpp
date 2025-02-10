#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	string s, res = "", minima;
	cin >> s;
	
	for(int i = 0; i < n; i++){
		res += s[i];
		string aux = res;
		while((int)aux.size() < k){
			aux = aux + aux;
		}
		while((int)aux.size() > k){
			aux.pop_back();
		}
		if(i == 0)
			minima = aux;
		else
			minima = min(minima, aux);
	}
	cout << minima << "\n";
 
	return 0;
}
