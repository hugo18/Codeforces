#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int cont = 0;
	while(a > 0 && b > 0){
		if(a == 1 && b == 1) break;
		if(a >= b){
			a -= 2;
			if(b < 100)
				b++;
		}else{
			b -= 2;
			if(a < 100)
				a++;
		}
		cont++;
	}
	cout << cont << "\n";
	return 0;
}
