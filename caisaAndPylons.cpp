#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> v(n);
	for(auto &it: v) cin >> it;
	ll custo = 0LL, energia = 0LL;
	custo += v[0];
	
	for(int i = 1; i < n; i++){
		if(v[i] - v[i - 1] > energia){
			v[i - 1] += energia;
			energia = 0LL;
			custo += v[i] - v[i - 1];
		}else if(v[i] - v[i - 1] <= energia)
			energia -= (v[i] - v[i - 1]);
	}
	cout << custo << "\n";
	return 0;
}

