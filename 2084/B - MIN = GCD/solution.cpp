#include <bits/stdc++.h>
/*
|-------------------|
|Solved by,         |
|.  SHAHEER IMAM.   |
|-------------------|
*/
typedef long long ll;
using namespace std;
void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &i:v){
        cin >> i;
        
    }
    bool flag=false;
    sort(v.begin(),v.end());
    ll mn=v[0];
    vector<ll> v2;
    for(ll i=1;i<n;i++){
        if(v[i]%mn==0){
            v2.push_back(v[i]);
        }
    }
    ll gcd=0;
    for(auto g:v2){
        gcd=__gcd(gcd,g);
    }
    if(gcd==mn){
        cout <<"Yes
";
    }else{
        cout <<"No
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