#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k, r;
	cin >> k >> r;
	int resto = k % 10;
	int n = 1;
	while(resto * n % 10 != r && (k * n) % 10 != 0 ){
		n++;
	}
	cout << n << "\n";
	return 0;
}
