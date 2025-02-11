#include <bits/stdc++.h>
using namespace std;
 
bool verifica(string & s, int k){
	int tamanho = s.size();
	for(int i = 0; i < k; i++){
		if(s[i] != s[tamanho - 1 - i])
			return false;
	}
	return true;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n, k;
		string s;
		cin >> n >> k;
		cin >> s;
		if(k == 0)cout << "YES\n";
		else if(n <= 2 * k)
			cout<<"NO\n";
		else{  
			if(verifica(s, k))
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
 
	return 0;
}
