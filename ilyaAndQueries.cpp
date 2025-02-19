#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	int m, n;
	n = (int)s.size();
	vector<int> v(n, 0);
	for(int i = 1; i < n; i++){
		if(s[i - 1] == s[i])
			v[i] += (1 + v[i - 1]);
		else
			v[i] = v[i - 1];
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		cout << v[b - 1] - v[a - 1] << "\n"; 
	}
	return 0;
}
