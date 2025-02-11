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
		vector<int> v(n);
		for(auto &it: v) cin >> it;
		bool flag1 = false, flag2 = true, flag3 = false;
		if(v[0] == 1 || v[n-1] == n){
			flag1 = true;  
		}
		if(v[0] == n && v[n - 1] == 1){
			flag3 = true; 
		}
		if(flag1){
			for(int i = 0; i < n; i++){
				if(v[i] != (i + 1)){
					flag2 = false;
					break;
				}
			}
		}else{
			flag2 = false;
		}
		if(flag3) cout << "3\n";
		else if(flag2) cout << "0\n";
		else if(!flag2 && flag1) cout << "1\n";	
		else if(!flag2 && !flag1) cout << "2\n";
	}
	return 0;
}
