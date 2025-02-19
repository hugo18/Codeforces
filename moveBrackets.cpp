#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int cont = 0, resposta = 0;
		for(auto it: s){
			if(it == '(') cont--;
			else cont++;
			if(cont > 0){
				resposta += cont; 
				cont = 0;
			}
		}
		cout << resposta << "\n";
	}
	return 0;
