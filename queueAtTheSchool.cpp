#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	for(int i = 0; i < t; i++){
		bool flag = false;
		for(int j = 0;  j < n - 1; j++){
			if(s[j] == 'B' && s[j + 1] == 'G'){
				flag = true;
				swap(s[j], s[j + 1]);
				j++;
			}
		}
		if(!flag) break;
	}
	cout << s << "\n";
	return 0;
}
