#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		
		vector<int> v(n);
		for(auto &it: v) cin >> it;
		sort(v.begin(), v.end());
		
		bool flag = false;
		for(int i = 0; i < n - 1; i++){
			if(v[i + 1] - v[i] == 1){
				flag = true;
				break;
			}
				
		}
		if(!flag)
			cout<<"1\n";
		else
			cout<<"2\n";
	}
	return 0;
}
