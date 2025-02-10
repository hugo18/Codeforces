#include <bits/stdc++.h>
using namespace std;
 
using ull = unsigned long long; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n, q;
		cin >> n >> q;
		vector<ull> v(n);
		vector<pair<int, int>> qs(q);
		for(auto &it: v) cin >> it;
		for(int i = 0; i < q;i++){
			int aux1, aux2;
			cin >> aux1 >> aux2;
			aux1--;
			aux2--;
			qs[i] = {aux1, aux2};
		}
 
		vector<ull> v2(n);
		for(int i = 0; i < n; i++){
			while(v[i] > 1ULL){
				if(v[i] % 2ULL != 0ULL){
					v[i]--;
					v2[i]++;
				}else{
					v[i] /= 2ULL;
					v2[i]++;
				}
			}
		}
		for(int i = 1; i < n; i++){
			v2[i] += v2[i-1];
		}
		for(auto it: qs){
			if(it.first == 0)
				cout << v2[it.second]<<"\n";
			else
				cout << v2[it.second] - v2[it.first - 1] << "\n";
			
		}
	}
 
	return 0;
}
