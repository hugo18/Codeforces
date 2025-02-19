#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<int> resposta;
		resposta.push_back(0);
		int n = 2;
		for(int i = 0; i < (int)s.size(); i++){
			if(s[i] == 'R'){
				resposta.push_back(i + 1);
				n++;
			}
		}
		resposta.push_back((int)s.size() + 1);
		int max = 0;
		for(int i = 1; i < n; i++){
			if(resposta[i] - resposta[i - 1] > max)
				max = resposta[i] - resposta[i - 1];
		}
		cout << max << "\n";
	}
	
	return 0;
}
