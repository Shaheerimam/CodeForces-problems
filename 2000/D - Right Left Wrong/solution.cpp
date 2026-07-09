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
    int n;cin>> n;
    vector<long long> v(n);
    vector<long long> pre(n+1);
    pre[0]=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        pre[i+1]=v[i]+pre[i];
    }
    // for(int g:pre){
    //     cout << g <<" ";
    // }
    string s;
    cin >> s;
    int l=0;
    int r=n-1;
    long long ans=0;
    while(l<r){
        if(s[l]=='L' && s[r]=='R'){
            long long sum=pre[r+1]-pre[l];
            ans+=sum;
            r--;
            l++;
        }
        else if(s[l]!='L'){
            while(l<r && s[l]!='L'){
                l++;
            }
        }else{
            while(l<r && s[r]!='R'){
                r--;
            }
        }
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