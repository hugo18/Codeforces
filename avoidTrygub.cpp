#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
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
		int cont = 0;
		for(int i = 0; i < n; i++){
			if(s[i] != 't')
				cout << s[i];
			else
				cont++;
		}
		for(int i = 0; i < cont; i++){
			cout<<"t";
		}
		cout << "\n";
	}
	return 0;
}
