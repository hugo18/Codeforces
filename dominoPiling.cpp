#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int resposta = (n/2)*m + (n%2)*(m/2);
	cout << resposta << "\n";
	return 0;
}
