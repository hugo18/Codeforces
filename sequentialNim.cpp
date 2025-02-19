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
		bool flag = false;
		int pos;
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
			if(v[i] != 1 && !flag){
				flag = true;   
				pos = i;
			}
		} 
		if(flag){
			if(pos % 2 == 0)
				cout<<"First\n";
			else
				cout<<"Second\n";
		}else{
			if(n % 2 == 0)
				cout<<"Second\n";
			else
				cout<<"First\n";
		}
	}
	return 0;
}
