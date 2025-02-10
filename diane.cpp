#include <bits/stdc++.h>
using namespace std;
 
void solve(int n){
	if(n == 1) cout<<"a\n";
	else{
		if(n & 1){
			if(!((n/2) &  1)){
				int a, b;
				a = n/2 - 1;
				b = n/2 + 1;
				for(int i =  0; i <= (b/2); i++){
					cout << "b";
				} 	
				cout<<"c";
				for(int i =  0; i <= (a/2); i++){
					cout << "a";
				}	 
				for(int i =  1; i <= (b/2); i++){
					cout << "b";
				} 
				for(int i =  1; i <= (a/2); i++){
					cout << "a";
				} 
				cout << "\n";		
			}else{
				int a, b;
				a = n/2;
				b = n/2;
				for(int i =  0; i <= (b/2); i++){
					cout << "b";
				} 	
				cout<<"c";
				for(int i =  0; i <= (a/2); i++){
					cout << "a";
				}	 
				for(int i =  1; i <= (b/2); i++){
					cout << "b";
				} 
				for(int i =  1; i <= (a/2); i++){
					cout << "a";
				} 
				cout << "\n";		
			}
		}else{
			for(int i =  1; i <= (n/2); i++){
				cout<<"b";
			}
			cout<<"a";
			for(int i =  1; i < (n/2); i++){
				cout<<"b";
			}
			cout << "\n";
		}
	}	
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		solve(n);
	}
	return 0;
}
