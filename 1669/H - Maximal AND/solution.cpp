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
    ll n,k;
    cin >> n >> k;
    vector<ll>v(31,0);
    for(int i=0;i<n;i++){
        ll val;cin >>val;
        for(int j=0;j<31;j++){
            if(((val>>j)&1)==1){
                v[j]++;
            }
        }
    }
    reverse(v.begin(),v.end());
    for(int h=0;h<31;h++){
        if(v[h]+k>=n){
            //cout << v[h] <<k <<endl;
            
            k=k-(n-v[h]);
            v[h]=n;
            //cout << v[h] <<k-(n-v[h]) <<endl;
            
        }
    }
    ll ans=0;
    for(int h=0;h<31;h++){
       // cout << v[h] <<" ";
        if(v[h]==n){
            ans+=pow(2,(30-h));
        }
    }
    cout <<ans<<endl;
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