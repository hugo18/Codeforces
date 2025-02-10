#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	vector<int> vn(n), vk(k);
	
	for(auto &it: vn) cin >> it;
	for(auto &it: vk) cin >> it; 
	if(k > 1) cout << "YES\n";
	else{
		int zero;
		bool flag = true;
		for(int i = 0; i < n; i++){
			if(vn[i] == 0){
				zero = i;
				break;
			}
		}
		for(int i = 1; i < n; i++){
			if(i == zero) continue;
			if((i - 1) != zero){
				if(vn[i] <= vn[i - 1]) flag = false;
			}else{
				if((i -  2) >= 0 && vn[i] <= vn[i - 2]){
					flag = false;
				}
			}
		}
		if(!flag) cout<<"YES\n";
		else{
			if(zero - 1 >= 0 && zero + 1 < n && vk[0] >  vn[zero - 1] && vk[0] < vn[zero + 1])
				cout<<"NO\n";
			else if(zero - 1 >= 0 && zero + 1 < n && (vk[0] <  vn[zero - 1] || vk[0] > vn[zero + 1]))
				cout<<"YES\n";
			else if(zero - 1 >= 0 && vk[0] >  vn[zero - 1])
				cout<<"NO\n";			
			else if(zero - 1 >= 0 && vk[0] <  vn[zero - 1])
				cout<<"YES\n";
			else if(zero + 1 < n && vk[0] < vn[zero + 1])
				cout<<"NO\n";
			else if(zero + 1 < n && vk[0] > vn[zero + 1])
				cout<<"YES\n";
		}	
	}
 
	return 0;
}
