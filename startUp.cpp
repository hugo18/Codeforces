#include <bits/stdc++.h>
 
using namespace std;
bool comparar(char c){
	if(c != 'A' && c != 'H' && c != 'I' && c != 'M' && c != 'O' && c != 'T' && c != 'U' && c != 'V' && c != 'W' && c != 'X' && c != 'Y')
		return false;
	return true;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int n = (int)s.size();
	
	if(n == 1){
		if(!comparar(s[0]))
			cout << "NO\n";
		else
			cout << "YES\n";
		return 0;
	}
	
	bool flag = true;
	
	if(n % 2 == 1){
		if(!comparar(s[n/2]))
			flag = false;
	}
	for(int i = 0, j = n - 1; i < (n/2); i++, j--){
		if(s[i] != s[j] || !comparar(s[i])){
			flag = false;
			break;
		} 
	}
	if(!flag)
		cout << "NO\n";
	else{
		cout << "YES\n";
		
	}
	return 0;
}

