#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	map<int, ll> m1, m2;
	while(n--){
		int a, b;
		cin >> a >> b;
		m1[a - b]++;
		m2[a + b]++;
	}
	ll res = 0LL; 
	for(auto it: m1){
		res += ((it.second - 1LL) * it.second)/2LL;
	}	
	for(auto it: m2){
		res += ((it.second - 1LL) * it.second)/2LL;
	}	
	cout << res << "\n";
	return 0;
}

