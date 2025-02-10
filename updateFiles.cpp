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
        ll aux = n - 1LL;
        ll cabos = 1LL;
        ll cont = 0LL;
        bool flag = false; 
        while(aux > 0){
            if(cabos > k){
                flag = true;
                break;
            }
            cont++;
            aux -= cabos;
            cabos *= 2LL;
        }
        if(flag){
            cont += aux/k;
            if(aux % k != 0LL)
                cont++; 
        }
        cout << cont << "\n";
    }
	return 0;
}
