#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
typedef long long ll;
using namespace std;
void solve(){
    int n;
    cin>> n;
    string s;cin >> s;
    string t; cin >> t;
    if(s[0]=='1'||s==t){
        cout <<"YES
";
        return;
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            if(s[i]=='1'){
                break;
            }
            flag=false;
            break;
        }
        if(s[i]=='1'){
            break;
        }
    }
    if(flag){
        cout << "YES
";
    }else{
        cout <<"NO
";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}