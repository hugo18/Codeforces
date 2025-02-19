#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		string s = "";
		for(int i = 9; i >= 1; i--){
			s += min(x, i) + '0';
			x -= i;
			if(x <= 0)
				break;
		}
		if(x > 0){
			cout<<"-1\n";
			continue;
		}
		
		for(int i = (int)s.size() - 1; i >= 0; i--){
			cout<<s[i];
		}
		cout<<"\n";
	}
	return 0;
}
