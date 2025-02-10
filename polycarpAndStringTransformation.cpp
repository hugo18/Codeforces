#include <bits/stdc++.h>
using namespace std;
 
bool testa(string &t, string s, string &letras){
	string aux = s, aux2;
	for(auto c: letras){
		aux2 = "";
		for(auto it: s){
			if(it != c) aux2 += it;
		}
		s = aux2;
		if((int)s.size() > 0)
			aux += s;
	}
	if(aux == t) return true;
	else return false;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string t;
		cin >> t;
		vector<int> aux(26, 0);
		string letras = "", copia = t;
		reverse(t.begin(), t.end());
		for(auto it: t){
			if(aux[it - 'a'] == 0){
				letras += it;
			}
			aux[it - 'a']++;
		}
		int cont = 1, res = 0;
		reverse(letras.begin(), letras.end());
		for(auto it: letras){
			res += aux[it - 'a']/cont;
			cont++;
		}
		string s = copia.substr(0, res);
		if(testa(copia, s, letras))
			cout << s << " " << letras << "\n";
		else
			cout << "-1\n";
		
	}
	return 0;
}
