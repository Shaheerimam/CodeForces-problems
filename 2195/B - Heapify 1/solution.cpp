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
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n+1);
    bool flag=true;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        while(v[i]%2==0){
            v[i]/=2;
        }
        int tmp=i;
        while(tmp%2==0){
            tmp/=2;
        }
        if(v[i]!=tmp){
            flag=false;
        }
    }
    if(flag){
        cout <<"YES
";
    }else{
        cout <<"NO
";
    }
    
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}