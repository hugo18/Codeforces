#include <iostream>
#include <vector>
using namespace std;
 
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k1, k2;
        int w, b;
        cin >> n >> k1 >> k2;
        cin >> w >> b;
        int nw = 0, nb = 0;
        if(k1 > k2){
            nw += k2;
            nw += (k1 - k2)/2;
            nb += n - k1;
            nb += (k1 - k2)/2;
        }
        else if(k1 < k2){
            nw += k1;
            nw += (k2 - k1)/2;
            nb += n - k2;  
            nb += (k2 - k1)/2;
        }
        else{
            nw += k1;
            nb += n - k1;
        }
        if(w <= nw && b <= nb) cout<<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}
