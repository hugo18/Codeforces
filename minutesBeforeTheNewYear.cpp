#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int h, m;
		cin >> h >> m;
		cout << ((60 * (24 - h)) - m) << "\n"; 
	}
	
	return 0;
}
