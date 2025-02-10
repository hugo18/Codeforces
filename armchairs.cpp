#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<int>> dp(5010, vector<int>(2510, -1));
 
int resolve(int i, int j, vector<int> &zeros, vector<int> &uns){
	if(i >= n && j < m) return (int)1e9;
	else if(j >= m) return 0;
	else if(dp[i][j] != -1) return dp[i][j];
	else{
		dp[i][j] = min(resolve(i + 1, j, zeros, uns), resolve(i + 1, j + 1, zeros, uns) + abs(uns[j] - zeros[i]));
		return dp[i][j];
	}
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	vector<int> zeros, uns;
	for(int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		if(aux == 1)
			uns.push_back(i);
		else
			zeros.push_back(i);
	}
	m = (int)uns.size();
	n = (int)zeros.size();
	int res = resolve(0, 0, zeros, uns);
	cout << res << "\n";
	return 0;
}

