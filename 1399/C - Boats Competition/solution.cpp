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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
 
    int mx = 0;
    for (int i = 2; i <= n * 2; i++)
    {
        int current=0;
        for (auto [x, y] : mp)
        {
            int g=i-x;
            if(mp.find(g)!=mp.end()){
                current+=min(y,mp[g]);
            }
        }
        current=current/2;
        mx=max(current,mx);
    }
 
    cout << mx << endl;
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