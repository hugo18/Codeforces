#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int idxAB = -1,  idxBA = -1;
    bool flag = false;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] =='A' && s[i+1] == 'B') {
            idxAB = i;
            break;
        }
           
    }
    if(idxAB != -1){
        for(int i = idxAB + 2; i < s.size() - 1; i++){
            if(s[i] =='B' && s[i+1] == 'A') {
                flag = true; 
                break;
            }
           
        }
    }
    if(!flag){
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] =='B' && s[i+1] == 'A') {
                idxBA = i;
                break;
            }
        }
        if(idxBA != -1){
            for(int i = idxBA + 2; i < s.size() - 1; i++){
                if(s[i] =='A' && s[i+1] == 'B') {
                    flag = true; 
                    break;
                }
           
            }
        }
    }
    if(!flag) cout<<"NO\n";
    else cout<<"YES\n";
    
    
    
    return 0;
}
