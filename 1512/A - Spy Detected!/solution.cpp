#include<bits/stdc++.h>
#include<set>
 
 
 
 
 
 
using namespace std;
typedef long long ll;
const ll N = 1e10;
 
void solve()
{
    int n,ans;
    cin >> n;
 
    vector<int> v(n);
    map<int,int> mp;
 
    for (int i =0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i+1;
    }
    sort(v.begin(),v.end());
 
    if (v[0] != v[1]) ans = mp[v[0]];
    else ans = mp[v[n-1]];
    
    cout << ans << endl;
}
 
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
     solve();
    }
 
    return 0;
}