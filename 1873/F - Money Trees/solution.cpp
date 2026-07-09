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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<ll> h(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    h[n] = 1;
    int l = 0;
    int r = 0;
    // int l2=0;int r2=0;
    int sum = 0;
    int ans = 0;
    while (r < n)
    {
 
        sum += (v[r]);
 
        if (h[r] % h[r + 1] == 0)
        {
            if (sum <= k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                // cout <<"HIT"<<endl;
                while (sum > k)
                {
                    sum -= (v[l]);
                    l++;
                }
            }
        }else{
            if (sum <= k)
            {
                ans = max(ans, r - l + 1);
            }
            //ans = max(ans, r - l + 1);
            r++;
            l=r;
            sum=0;
            continue;
        }
 
        r++;
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
        // cout <<72%24<<endl;
    }
}