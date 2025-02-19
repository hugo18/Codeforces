#include <bits/stdc++.h>
 
using namespace std;
typedef pair<int, int> pi;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<pi> v(n);
		for(int i = 0; i < n; i++){
			int a, b;
			cin >> a >> b;
			v[i] = {b, a}; 
			
		}
		sort(v.begin(), v.end());
		string s = "";
		int x = 0, y = 0;
		bool flag = true;
		for(auto it : v){
			int aux1, aux2;
			aux1 = it.second;
			aux2 = it.first;
			if(x > aux1){
				flag = false;
				break;
			}
			for(int i = 0; i < (aux1 - x); i++){
				s += 'R';
			}
			for(int i = 0; i < (aux2 - y); i++){
				s += 'U';
			}
			y = aux2;
			x = aux1;
		}
		if(!flag)
			cout<<"NO\n";
		else{
			cout<<"YES\n";
			cout<<s<<"\n";
		}
		
	}
		
	return 0;
}
