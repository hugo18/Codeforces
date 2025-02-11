#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	double n;
	cin >> n;
	double resposta = 0.0;
	for(double i = n; i > 0.0; i--){
		resposta += 1.0/i;
	}	
	cout << fixed << setprecision(12) << resposta << "\n";
	return 0;
}
