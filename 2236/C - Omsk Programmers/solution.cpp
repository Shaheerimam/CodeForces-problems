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
    ll a, b, x;
    cin >> a >> b >> x;
    ll ans = 0;
    ll min_ops = abs(a - b);
    while (a != b)
    {
      if (a > b) {
            a /= x;
        } else {
            b /= x;
        }
        ans++;
        min_ops = min(min_ops, ans + abs(a - b));
    }
    cout << min_ops << endl;
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