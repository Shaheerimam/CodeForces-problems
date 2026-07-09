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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,a,b,p,q;cin >> n >> a >> b >> p>>q;
    ll t1=(n/a);
    ll t2=(n/b);
    ll comon=(n/((a/__gcd(a,b))*b));
    ll ans=0;
    t1-=comon;
    t2-=comon;
    ans+=t1*p;
    ans+=t2*q;
    if(p>q){
        ans+=comon*p;
    }else{
        ans+=comon*q;
    }
    cout << ans << endl;
}