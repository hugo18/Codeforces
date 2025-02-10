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
		vector<int> v(2*n), v2;
		for(auto &it: v) cin >> it;
		set<int> s;
		for(auto it: v){
			if(s.find(it) == s.end()){
				s.insert(it);
				cout<<it<<" ";
			}
		}
		cout << "\n";
	}
 
	return 0;
		
}
