#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s[0] == ')' || s[s.size() - 1] == '(') cout<<"NO\n";
		else{
			int q = s.size() - 2;
			if(q%2==0)cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}

