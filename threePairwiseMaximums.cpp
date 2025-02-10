#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int x, y, z;
		cin >> x >> y >> z;
		int a, b, c;
		if(x == y && x == z){
			cout<<"YES\n";
			cout<<x<<" "<<y<<" "<<z<<"\n";
		}else if(x == y && x > z){
			cout<<"YES\n";
			cout<<x<<" "<<z<<" "<<z<<"\n";
		}else if(x == z && x > y){
			cout<<"YES\n";
			cout<<y<<" "<<x<<" "<<y<<"\n";
		}else if(y == z && y > x){
			cout<<"YES\n";
			cout<<x<<" "<<x<<" "<<z<<"\n";
		}else{
			cout<<"NO\n";
		}
 
 
	}
 
	return 0;
		
}
