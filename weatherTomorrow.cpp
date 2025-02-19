#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	int aux = v[1] - v[0];
	
	bool flag = true;
	for(int i = 2; i < n; i++){
		if(v[i] - v[i - 1] != aux){
			flag = false;
			break;
		}
	}
	if(!flag) cout << v[n - 1] << "\n";
	else cout << v[n - 1] + aux << "\n";
		
	return 0;
}

