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
		for(int i = 0; i < n; i++){
			if(i % 2 == 0){
				v[i] = v[i] >= 0 ? v[i] : -v[i];
				cout << v[i] << " ";
			}else{
				v[i] = v[i] <= 0 ? v[i] : -v[i];
				cout << v[i] << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
