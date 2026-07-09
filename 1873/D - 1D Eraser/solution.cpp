#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;
void solve(){
    int n,m;
    string s;
    cin >> n >>m;
    cin >> s;
    int l=0;
    int r=0;
    int ans=0;
    while(l<n && r<n){
        if(s[r]=='B'){
            ans++;
            r+=(m-1);
        }
        r++;
        
    }
    cout << ans <<endl;
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