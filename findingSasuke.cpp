#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(auto &it: v) cin >> it;
		for(int i = n - 1; i >= (n/2); i--){
			cout<< -v[i]<<" ";
		}
 		for(int i = (n/2) - 1; i >=0; i--){
 			cout << v[i]<<" ";
 		}
 		cout << "\n";
 	}
	
	return 0;
}
