#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int main(){
	ll n, k;
	cin >> n >> k;
	ll meio;
	if(n % 2 == 0)
		meio = n/2;
	else
		meio = n/2 + 1;
	if(k <= meio)
		cout << 2LL * k - 1 << "\n";
	else{
		if(n % 2 == 0)
			cout << 2LL * k - n << "\n"; 
		else
			cout<< 2LL * k - n - 1 << "\n"; 
	}
	return 0;
}
