#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	map<string, string> ma;
	for(int i = 0; i < n; i++){
		string s1, s2;
		cin >> s1 >> s2;
		ma[s2] = s1;
	}
	vector<string> s(2 * m);
	int j = 0;
	for(int i = 0; i < m; i++){
		string s1, s2;
		cin >> s1 >> s2;
		s[j++] = s1;
		s[j++] = s2; 
	}
	for(int i = 1; i < (2 * m); i += 2){
		cout << s[i - 1] << " " << s[i] << " #" << ma[s[i].substr(0, s[i].size() - 1)] << "\n";
	}
	return 0;
}

