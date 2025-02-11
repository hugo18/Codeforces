#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	int numUns = 0;
	for(auto &it: v){
		cin >> it;
		if(it & 1) numUns++;
	}
	sort(v.begin(), v.end());
	int a = 0, b = n-1, cont = 0;
	while(a < b){
		if(v[a] == 2 && v[b] == 2) break;
		if(v[a] == 1 && v[b] == 1) break;
		if(v[a] == 1 && v[b] == 2){
			cont++;
			a++;
			b--;
			numUns--;
		}
		
	}
	cout << cont + (numUns/3) << "\n";
	return 0;
}
