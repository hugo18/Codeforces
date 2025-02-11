#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
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
		vector<int> v1(n, 0);
		for(int i = n - 1;i >= 0 ; i--){
			v1[i] = v[i];
			int j = i + v[i];
			if(j < n){
				v1[i] += v1[j];
			}
		}
		cout << *max_element(v1.begin(), v1.end()) << "\n";
	}
	return 0;
}
