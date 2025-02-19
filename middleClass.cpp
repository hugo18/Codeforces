#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		long long x;
		cin >> n >> x;
		vector<long long> v(n);
		for(auto &it: v) cin >> it;
		sort(v.rbegin(), v.rend());
		long long soma = v[0];
		int i = 0;
		while(soma >= x * (long long)(i + 1) && i < n){
			i++;
			soma += v[i];
		}
		cout << i << "\n";
	}
	return 0;
}
