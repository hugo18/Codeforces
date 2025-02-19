#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> v(n);
	ll cont = 0LL;
	for(auto &it: v){
		cin >> it; 
		cont += it;
	}
	int m;
	cin >> m;
	vector<ll> vm(m);
	for(auto &it: vm)
		cin >> it; 
	
	sort(v.rbegin(), v.rend());
	for(auto it: vm){
			cout << cont - v[it - 1] << "\n";
	}
	
	return 0;
}
