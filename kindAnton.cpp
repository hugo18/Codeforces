#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n), b(n);
		for(auto &it: a) cin >> it;
		for(auto &it: b) cin >> it;
		bool flag[2] = {false, false};
		bool aux = true;  
		for(int i = 0; i < n; i++){
			if(a[i] < b[i] && !flag[0]){
				aux = false;
				break;
			}else if(a[i] > b[i] && !flag[1]){
				aux = false;
				break;
			}
			if(a[i] == 1)
				flag[0] = true;
			else if(a[i] == -1)
				flag[1] = true;
		}
		if(aux)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
