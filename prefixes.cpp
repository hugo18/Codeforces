#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cont = 0;
	for(int i = 0; i < n - 1; i += 2){
		if(s[i] == s[i + 1]){
			if(s[i] == 'a')
				s[i] = 'b';
			else
				s[i] ='a';
			cont++;
		}
	}
	cout << cont << "\n";	
	cout << s << "\n";
	return 0;
}
 
