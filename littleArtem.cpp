#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int l, c;
		cin>>l>>c;	
		for(int i = 1; i < l; i++){
			for(int j = 1; j < c; j++){	
				cout<<"W";
			}
			cout<<"B\n";
		}	
		for(int i = 1; i <= c;i++){
			cout<<"B";
		}
		cout << "\n";
	}
	return 0;
}
