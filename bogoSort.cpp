#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(auto &it: v) cin >> it;
		sort(v.rbegin(), v.rend());
		for(auto it: v) cout<<it<<" ";
		cout << "\n";		
 	}
	return 0;
}
