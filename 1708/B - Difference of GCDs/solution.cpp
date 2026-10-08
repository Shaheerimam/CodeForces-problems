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
    ll n,l,r;
    cin >> n >> l >>r;
    vector<int> v(n);
    for(int i=1;i<n+1;i++){
        if(l%i==0){
            v[i-1]=l;
        }else{
            ll a=l/i +1;
            if(a*i <=r){
                v[i-1]=a*i;
            }else{
                cout << "NO
";
                return;
            }
        }
    }
    cout <<"YES
";
    for(auto k:v){
        cout <<k << " ";
    }
    cout<<"
";
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