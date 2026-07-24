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
    cin >> a>>b;
    if(b<4){
        cout <<-1 <<endl;
        return;
    }
    if(abs(b-a)>=1){
        if(b%2==0){
            cout << 2 <<" "<<b-2<<endl;
        }else{
            cout << 2 <<" "<<(b-1)-2<<endl;
        }
    }else{
        for(ll i=2;i*i<=a;i++){
            if(a%i==0){
                if(__gcd(i,a-i)!=1){
                    cout << i <<" "<<a-i<<endl;
                    return;
                }
                
            }
        }
        cout <<-1 <<endl;
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