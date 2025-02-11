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
		vector<int> v(n);
		for(auto &it: v) cin >> it;
		int um = 0, zero = 0;
		for(int i = 0; i < n; i++){
			if(v[i] == 1) um++;
				
		}
		zero = n - um;
		if(zero >= n/2){
			cout << zero << "\n";
			for(int i = 0; i < zero; i++)cout << "0 ";
		
		}else{
			if(um % 2 == 1){
				cout << um - 1 << "\n";
				for(int i = 0; i < um - 1; i++) cout << "1 ";
			}else{
				cout << um << "\n";
				for(int i = 0; i < um; i++) cout << "1 ";
			}
		}
		cout << "\n";
	}
	
	return 0;
}
