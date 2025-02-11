#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pi = pair<int, int>;
 
int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
    	int A, B, k;
  		cin >> A >> B >> k;
  		vector<int> a(A), b(B);
  		vector<pi> edges(k);
  		for (auto &it : edges) 
    		cin >> it.first;
  		for (auto &it : edges) 
    		cin >> it.second;
  		
  		for (auto &it : edges) {
    		it.first--;
    		it.second--;
    		a[it.first]++;
    		b[it.second]++;
  		}
  		ll ans = 0LL;
  		for (auto &it:edges)
    		ans += (ll)(k - a[it.first] - b[it.second]) + 1LL;
  		cout << ans / 2LL <<"\n";
  	}
  	return 0;
}
