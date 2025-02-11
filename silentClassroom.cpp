#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	map<char, int> m1, m2;
	while(n--){
		string aux;
		cin >> aux;
		if(m1[aux[0]] > m2[aux[0]])
			m2[aux[0]]++;
		else
			m1[aux[0]]++;
	}
	int cont = 0;
	for(auto it: m1)
		cont += (it.second * (it.second-1))/2;  
	for(auto it: m2)
		cont += (it.second * (it.second-1))/2;
	cout << cont << "\n";
	return 0;
}

