#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	
	int t;
	cin >> t;
	while(t--){
		ll a, b, x, y;
		cin >> a >> b >> x >> y;
		ll r = x * b;
		r = max(r, (a - x - 1) * b);  
		r = max(r, y * a);
		r = max(r, (b - y - 1) * a);
		cout<<r<<"\n";
	}
	return 0;
}
