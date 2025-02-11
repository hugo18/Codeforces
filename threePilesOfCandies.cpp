#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		ll a, b, c;
		cin >> a >> b >> c;
		ll res = a + b + c - ((a+b+c)%2LL);
		cout << res/2LL << "\n"; 
	}
	return 0;
}
