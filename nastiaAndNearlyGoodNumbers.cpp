#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll a, b;
		cin>>a>>b;
		if(b == 1LL) cout<<"NO\n";
		else{
			if(b == 2LL){
				cout<<"YES\n";
				cout<<a<<" "<<a*b<<" "<<a*3LL<<"\n";
			}else{
				cout<<"YES\n";
				cout<<a<<" "<<a*(b-1LL)<<" "<<a*b<<"\n";
			}
 
			
		}	
	}
	return 0;
}
