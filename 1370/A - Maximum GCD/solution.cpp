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
    if(n%2==0){
        cout << n/2 << endl;
    }else{
        int mx=(n-1)/2;
        for(int i=sqrt(n);i>=3;i--){
            if(n%i==0){
                mx=max(n/i,mx);
            }
        }
        cout << mx << endl;
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