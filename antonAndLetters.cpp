#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	getline(cin, s);
	int cont = 0;
	unordered_set<char> con;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != '{' && s[i] != '}' && s[i] != ' ' && s[i] != ','){
			if(con.find(s[i]) == con.end()){
				cont++;
				con.insert(s[i]);
			}
		}
	}
	cout << cont << "\n";
	return 0;
}
