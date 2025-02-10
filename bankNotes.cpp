#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(auto &it: v) cin >> it;
        sort(v.begin(), v.end());
        ll valor = 0LL;
        bool flag = false; 
        
        for(int i = 0; i < (n - 1); i++){
            int aux1 = v[i + 1] - v[i]; 
            ll aux2 = 0LL;
            for(int j = 1; j <= aux1; j++){
                aux2 += 9LL;
                if(j < aux1)
                    aux2 *= 10LL;
            }
            if(aux2 > k){
                valor += (((k + 1LL) * (ll)pow(10, v[i])));
                flag = true;
                break;
            }else
               valor += (aux2 * (ll)pow(10, v[i]));
            
            k -= aux2; 
        }
        if(!flag)
            valor += ((k + 1LL) * (ll)pow(10, v[n - 1]));
        
         cout << valor << "\n";
    }
	return 0;
}
