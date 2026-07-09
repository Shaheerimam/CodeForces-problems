#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <queue>
 
using namespace std;
void solve(){
    int n,x;
    cin >> n >>x;
 
    string s;
    cin >> s;
    int l=0;
    int r=0;
    int ans=INT_MAX;
    int sum=0;
    while(l<n && r<n && ans!=0){
        if(s[r]=='W'){
            sum++;  
        }
        if(r-l+1==x){
            ans=min(ans,sum);
            if(s[l]=='W'){
                sum--;
            }
            l++;
        }
        r++;
    }
    cout << ans << endl;
 
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