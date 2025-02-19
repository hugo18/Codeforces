#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> k >> n;
		if(k % n == 0)
			cout << k << "\n";
		else{
			int resultado = (k/n) * n;
			if(k % n <= (n/2))
				resultado += k % n;
			else
				resultado += (n/2);
			cout << resultado << "\n"; 
		}
 
	}
	
	return 0;
}

