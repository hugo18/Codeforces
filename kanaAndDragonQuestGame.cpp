#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int x, n, m;
		cin >> x >> n >> m;
		if(x <= 10 * m){
			cout << "YES\n";
		}else{
			bool flag = false;
			while(n > 0){
				x /= 2;
				x += 10;
				if(x <= 10 * m){
					flag = true;
					break;
				}
				n--;
			}
			if(!flag)
				cout << "NO\n";
			else
				cout << "YES\n";
		}
	} 
	return 0;
}
