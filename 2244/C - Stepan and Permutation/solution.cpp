#include <bits/stdc++.h>
/*
|-------------------|
|Solved by,         |
|.  SHAHEER IMAM.   |
|-------------------|
*/
typedef long long ll;
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int gcd = __gcd(a, b);
    if (gcd == 1)
    {
        cout << "YES
";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (abs(v[i] - (i + 1)) % gcd != 0)
            {
                cout << "NO
";
                return;
            }
            
        }
        cout << "YES
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