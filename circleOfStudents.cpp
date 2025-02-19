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
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		bool flag = true;
		for(int i = 0; i < n - 1; i++){
			if(abs(v[i] - v[i + 1]) > 1){
				if(v[i] != 1 && v[i + 1] != 1){
					flag = false;
					break;
				}
			}
		}
		if(abs(v[0] -  v[n - 1]) > 1){
			if(v[0] != 1 && v[n - 1] != 1)
					flag = false;
		}
		if(!flag)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	
	return 0;
}
 
