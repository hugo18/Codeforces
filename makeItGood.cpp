#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
       	int n; 
       	cin >> n;
       	vector <int> v(n);
 
       	for(auto &it : v) cin >> it;
    
       	reverse(v.begin(), v.end());
 
       	int i;
       	for(i = 1; i < n; i++) {
           if(v[i] < v[i - 1])
                break;
       	}
       	int j;
    	for(j = i; j < n; j++) {
            if(v[j] > v[j - 1])
                break;
        }
 
        cout << n - j << "\n";
        
    }
 
 
    return 0;
}
