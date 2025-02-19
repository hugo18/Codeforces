#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	sort(v.begin(), v.end());
	int aux = v[0];
	if(aux == 1){
		cout << "1\n";
		return 0;
	}	
	bool flag = true;
	for(int i = 1; i < n; i++){
		if(v[i] % aux != 0){
			flag = false;
			break;
		}
	}
	if(flag)
		cout << aux << "\n";
	else
		cout << "-1\n";
	
	
	
	return 0;
}
