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
    ll a,b;
    cin >> a >> b;
    if(b>1){
        ll lcm=(a*b);
        cout <<"YES
";
        cout << a <<" "<< lcm<<" " << lcm+a<<endl;
    }else{
        cout <<"NO
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