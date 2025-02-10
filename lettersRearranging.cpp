#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; 
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, int> m;
		for(int i = 0; i < s.size(); i++){
			m[s[i]]++;
		}
		if(m.size() == 1)cout<<"-1\n";
		else{
			for(auto it: m){
				for(int i = 0;i < it.second; i++){
					cout << it.first;
				}
			}
			cout << "\n";
		}
	}
	return 0;
}
