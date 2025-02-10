#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> v(n);
	for(auto &it: v) cin>>it;
	sort(v.begin(), v.end());
	bool flag = false;
	for(int i = 0; i < (n-2); i++){
		if(v[i+2] < v[i] + v[i+1]) flag = true;
	}
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
