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
    ll n,k;cin>> n >>k;
    vector<ll> v(n);
    for(auto &i:v){
        cin >> i;
    }
    vector<ll> tmp=v;
    sort(tmp.begin(),tmp.end());
    if(tmp==v){
        cout <<"YES
";
    }else if(k<=1){
        cout <<"NO
";
    }else{
        cout <<"YES
";
    }
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