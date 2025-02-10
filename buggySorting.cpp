#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	if(n <= 2) cout << "-1\n";
	else{
		cout << n << " 2 1 ";
		for(int i = 3; i < n; i++){
			cout<<i<<" ";
		}
		cout << "\n";
	}
	return 0;
}
