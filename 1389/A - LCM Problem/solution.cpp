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
    ll l,r;
    cin >> l >> r;
    for(ll i=l;i<=r/2;i++){
        ll sum=l;
        ll j=2;
        while(sum<=r){
            sum*=j++;
            if(sum<=r){
                cout << i <<" "<<sum<<endl;
                return;
            }
        }
    }
    cout << -1 <<" "<<-1<<endl;
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