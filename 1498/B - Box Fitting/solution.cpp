#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
void solve()
{
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 1;
    int remain=w;
    while (!v.empty())
    {
        auto t = upper_bound(v.begin(), v.end(), remain);
        if (t == v.begin())
        {
            ans++;
            remain = w;
        }
        else
        {
            t--;
            remain -= *t;
            v.erase(t);
        }
    }
    cout << ans << endl;
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