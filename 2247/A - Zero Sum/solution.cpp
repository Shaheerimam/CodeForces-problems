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
    int n;
    cin >> n;
    vector<int> v(n);
    int one=0;
    int mone=0;
    for(auto &i:v){
        cin >> i;
        if(i==-1){
            mone++;
        }else{
            one++;
        }
    }
    if(n%2!=0){
        cout <<"NO
";
    }else{
        if(abs(one-mone)%4==0){
            cout <<"YES
";
        }else{
            cout <<"NO
";
        }
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