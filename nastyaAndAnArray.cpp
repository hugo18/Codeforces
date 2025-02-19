#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	int flag1 = 0, flag2 = 0;
	for(auto &it: v){ 
		cin >> it;
		if(it > 0) flag1 = 1;
		else if(it < 0) flag2 = 1;
	}
	sort(v.begin(), v.end());
	int cont = 0;
	cont += (flag1 + flag2);
	
	for(int i = 1; i < n; i++){
		if(v[i] != v[i - 1] && ((v[i] < 0 && v[i - 1] < 0) || (v[i] > 0 && v[i - 1] > 0))){
			cont++;
		}
		
	}
	cout << cont << "\n";
	return 0;
}
