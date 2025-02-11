#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	if(n == 1){
		cout << "0\n";
	}
	else{
		sort(v.begin(), v.end());
		ll res = 0LL;
		int j = 1; 
		for(int i = 0; i < n - 1; i++){
			while(j < n && v[i] >= v[j]) j++;
			if(j == n) break;
			res++;
			j++;
		}
		cout << res << "\n";
	}
	return 0;
}
