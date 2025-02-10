#include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
    	long long T, n, a, b, k = 0LL;
    		
    	cin >> T;
    	while(T--) {
    		cin >> n;
            map<int, long long> A, B;
    		for(int i = 0;i < n;i++) {
    			cin >> a >> b;
    			A[a]++;
    			B[b]++;
    		}
            for(auto it: A){
                k += it.second * B[it.first];
            }
    		cout << k << endl;
    		k = 0LL;
    	}
    	
    		return 0;
    }
 
