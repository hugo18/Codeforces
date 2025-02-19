#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	//cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int l = 0, r = 0, u = 0, d = 0;
		for(auto it: s){
			if(it == 'U') u++;
			else if(it == 'D') d++;
			else if(it == 'R') r++;
			else l++;
		}
		if(u != d){
			if(u < d)
				d = u;
			else
				u = d;
		}
		if(l != r){
			if(l < r)
				r = l;
			else
				l = r;
		}
		if(l == 0){
			if(u > 1){
				u = 1;
				d = 1;
			}
		}
		if(u == 0){
			if(l > 1){
				l =1;
				r = 1;
			}
		}
		cout << l + r + d + u<<"\n";
		
		for(int i = 0; i < l; i++){
				cout<<'L';
		} 
		for(int i = 0; i < d; i++){
				cout<<'D';
		} 
		for(int i = 0; i < r; i++){
				cout<<'R';
		} 
		for(int i = 0; i < u; i++){
				cout<<'U';
		} 
		cout<<"\n";
	}
	
	return 0;
}
