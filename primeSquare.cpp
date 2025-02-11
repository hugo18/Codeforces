#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		if(n % 2 == 0){
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n; j++){
					if(i == j || i == n - 1 - j)
						cout << "1 ";
					else
						cout << "0 ";	
				}
				cout << "\n";
			}
		}else{
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n; j++){
					if((i == j) || (i == (n - 1 - j)) || (i == 0 && j == (n/2)) || (i == (n/2) && j == 0))
						cout << "1 ";
					else
						cout << "0 ";	
				}
				cout << "\n";
			}
		}		
	}
	return 0;
}

