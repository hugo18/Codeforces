#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<string> s(n);
	for(auto &it:  s) cin >> it;
	for(int i = 1; i < n - 1; i++){
		for(int j = 1; j < n - 1; j++){
			if(s[i][j] == '.' && s[i - 1][j] == '.' && s[i + 1][j] == '.' && s[i][j - 1] == '.' && s[i][j + 1] == '.'){
				s[i][j] = '#'; 
				s[i - 1][j] = '#'; 
				s[i + 1][j] = '#'; 
				s[i][j - 1] = '#'; 
				s[i][j + 1] = '#';
			}
		}
	}
	bool flag = true;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(s[i][j] == '.'){
				flag = false;
				break;
			}
		}
	}
	if(flag)
		cout << "YES\n";
	else
		cout << "NO\n";
	
	return 0;
}

