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
    ll n,k;cin >> n >> k;
    vector<ll> v(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin >>v[i]; 
        sum+=v[i];
    }
    int steps=0;
    int l=0;
    int r=0;
    ll s=0;
    if(sum<k){
        cout << -1 << endl;
        return;
    }
    while(r<n){
        s+=v[r];
        if(s<=k){
            steps=max(steps,r-l+1);
        }else{
            while(s!=k){
                s-=v[l++];
            }
        }
        r++;
    }
    cout << n-steps << endl;
 
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