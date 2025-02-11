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
		vector<int> a(n), b(n);
		for(auto &it: a) cin >> it;
 		for(auto &it: b) cin >> it;
 		sort(a.begin(), a.end());
 		sort(b.begin(), b.end());
 		for(auto it: a) cout << it <<" ";
 		cout << "\n";
 		for(auto it: b) cout << it<<" ";
 		cout << "\n";
 	}
	
	return 0;
}
