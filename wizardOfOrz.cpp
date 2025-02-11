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
		if(n == 1) cout<<"9\n";
		else if(n == 2) cout << "98\n";
		else{
			string s = "98";
			int aux = 9;
			n -= 2;
			while(n > 0){
				s += to_string(aux);
				aux = (aux +  1) % 10;
				n--;
			}
			cout << s << "\n";
		}
	}
	return 0;
}
