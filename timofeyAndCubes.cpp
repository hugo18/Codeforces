#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it: v) cin >> it; 
	int i = 0, j = n - 1;
	
	while(i < j){
		swap(v[i], v[j]);
		i += 2;
		j -= 2;
		
	}
	for(auto it: v) cout << it << " ";
	cout<<"\n";
	return 0;
}
