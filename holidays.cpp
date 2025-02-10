#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; 
	cin >> n;
	int resto = n % 7, res = (n/7) * 2;
	if(resto > 5){
		cout << res + 1 << " ";
	}else{
		cout << res << " ";
	}
	if(resto > 1)
		cout << res + 2 << "\n";
	else if(resto == 1)
		cout << res + 1 << "\n";
	else
		cout << res << "\n";
	return 0;
}
