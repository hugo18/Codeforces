#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	unsigned long long res = 2ULL;
	for(int i = 2; i <= n; i++){
		res += (unsigned long long)pow(2, i);
	}
	cout << res << "\n";
	return 0;
}

