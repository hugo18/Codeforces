#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int q;
	cin >> q;
	while(q--){
		int l, r;
		cin >> l >> r;
		if(l % 2 == 0 && r % 2 != 0){
			cout << ((r-l + 1)/2) * -1 << "\n";
		}else if(l % 2 == 0 && r % 2 == 0){
			cout << ((((r - 1) - l + 1)/2) * -1) + r << "\n";
		}else if(l % 2 != 0 && r % 2 == 0){
			cout << ((r-l + 1)/2) << "\n";
		}else if(l % 2 != 0 && r % 2 != 0){
			cout << (((r - 1) - l + 1)/2) - r << "\n";
		}
	}
	return 0;
	
}

