#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		int s = a + b + c;
		if(s % 9 != 0) cout << "NO\n";
		else{
			if(a < (s/9) || b < (s/9) || c < (s/9)) cout << "NO\n";
			else cout << "YES\n";
		}	
	}
	
	
	return 0;
}
