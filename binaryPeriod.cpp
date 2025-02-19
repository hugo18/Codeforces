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
		int zero = 0, um = 0;
		for(auto it: s){
			if(it == '0')
				zero++;
			else
				um++;
		}
		if(zero == 0 || um == 0)
			cout << s << "\n";
		else{
			int t = (int)s.size();
			
			for(int i = 0; i < 2 * t; i++){
				if(i % 2 == 0)
					cout << "0";
				else
					cout << "1";
			}
			cout << "\n";
			
		}
	}
	return 0;
}
