#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int main(){
 
	ios::sync_with_stdio(0);
	cin.tie(0);	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int m = n * 4; 
		vector<ll> v(m);
		for(int i = 0; i < m; i++)
			cin >> v[i];
		
		sort(v.begin(), v.end());
		bool flag = true; 
	 	for(int i = 1; i < m; i += 2){
			if(v[i] != v[i - 1]){ 
				flag = false;
				break;
			}
		}
			
		if(!flag)
			cout<<"NO\n";
		else if(flag && n == 1)
			cout<<"YES\n";
		else{
			ll cont = v[0] * v[m - 1];
			for(int i = 2; i < (m/2) - 1; i += 2){
				if(v[i] * v[m - 1 - i] != cont){
					flag = false;
					break;
				}
			}
			if(flag)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
	return 0;
}
