#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	string s[n];
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	ll resultado = 0LL;
	for(int i = 0; i < n; i++){
		int auxL = 0, auxC = 0;  
		for(int j = 0; j < n; j++){
			if(s[i][j] == 'C')
				auxL++;
			if(s[j][i] == 'C')
				auxC++;
		}
		resultado += (1LL * (((auxL - 1) * auxL)/2));
		resultado += (1LL * (((auxC - 1) * auxC)/2));
	}
	cout << resultado << "\n";
	return 0;
}
