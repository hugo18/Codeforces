#include <iostream>
#include <vector>
using namespace std;
 
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int idx1 = 10000, idx0 = -1;
        for(int i = 1; i < n; i++){
            if(s[i] == '1' && s[i] == s[i - 1]){
                idx1 = i;
                break;
            }
        }
        for(int i = n - 1; i >= 1 ; i--){
            if(s[i] == '0' && s[i] == s[i - 1]){
                idx0 = i;
                break;
            }
        }
        if(idx1 < idx0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
