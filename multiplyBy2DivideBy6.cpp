#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int cont2 = 0, cont3 = 0;
		while(n % 2 == 0){
			cont2++;
			n /= 2;
		}
		while(n % 3 == 0){
			cont3++;
			n /= 3;
		}
		if(n != 1){
			cout << "-1\n";
		}else{
			if(cont3 >= cont2)
				cout << 2 * cont3 - cont2 << "\n";
			else
				cout << "-1\n";
		}
		
	}
 
	return 0;
}
