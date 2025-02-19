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
		bool flag = false;
		for(int i = 0; i < n - 2; i++){
			for(int j = i + 2; j < n; j++){
				if(v[i] == v[j]){
					flag = true;
					break;
				}
			}
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	 
	return 0;
}
