#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	string sr = s;
	reverse(sr.begin(), sr.end());
	s += sr;
	cout << s << "\n";
	return 0;
}
