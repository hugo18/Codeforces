#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(auto &it: v) cin >> it;
		sort(v.rbegin(), v.rend());
		for(auto it: v){
			if(it <= n) break;
			n--;
		}
		int soma = n + 1;
		cout << soma << "\n";
	}
	return 0;
}
