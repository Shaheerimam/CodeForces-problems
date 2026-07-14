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
    vector<ll> v2;
    v2.push_back(0);
    for(ll i=0;i<n;i++){
        ll val;
        cin >> val;
        v[i]=val;
        v2.push_back(v[i]+*v2.rbegin());
    }
    ll sum=0;
    ll pre_sum=0;
    for(ll i=1;i<=n;i++){
        sum+=i;
        //cout << v2[i]<<" ";
        if(v2[i]<sum){
            cout <<"NO
";
            return;
        }
    }
    cout << "YES
";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}