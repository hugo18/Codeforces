#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		ll a, b, n, s;
		cin >> a >> b >> n >> s;
		if(s/n >= a){
			s -= (a * n);
		}else{
			s -= ((s/n) * n); 
		}
		if(s > b)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
 
	return 0;
}
