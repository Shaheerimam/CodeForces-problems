#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &i:v){
        cin >> i;
    }
    ll gcd1=0;
    ll gcd2=0;
    for(int i=0;i<n;i+=2){
        gcd1=__gcd(v[i],gcd1);
    }
    for(int i=1;i<n;i+=2){
        gcd2=__gcd(v[i],gcd2);
    }
    bool flag=true;
    for(int i=0;i<n;i+=2){
        if(v[i]%gcd2==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout <<gcd2 << endl;
        return;
    }
    flag=true;
    for(int i=1;i<n;i+=2){
        if(v[i]%gcd1==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout <<gcd1 << endl;
        return;
    }
    cout << 0<<endl;
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