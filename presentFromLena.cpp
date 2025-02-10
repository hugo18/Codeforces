#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int e = 2 * n, c = 0;
	
	for(int i = 0; i <= n; i++){
		for(int j = e; j > 0; j--){
			cout<<" ";
		}
		for(int j = 0; j <= c; j++){
			if(c > 0)
				cout<<j<<" ";
			else 
				cout<<j;
		}
		for(int j = c - 1; j >= 0; j--){
			if(j > 0)
				cout<<j<<" ";
			else
				cout<<j;
		}
		
		cout << "\n";
		e -= 2;
		c++;
	}
	e = 2;
	c = n - 1;
	for(int i = 0; i < n; i++){
		for(int j = e; j > 0; j--){
			cout<<" ";
		}
		for(int j = 0; j <= c; j++){
			if(c > 0)
				cout<<j<<" ";
			else 
				cout<<j;
		}
		for(int j = c - 1; j >= 0; j--){
			if(j > 0)
				cout<<j<<" ";
			else
				cout<<j;
		}
		cout<<"\n";
		e += 2;
		c--;
	}
	return 0;
}

