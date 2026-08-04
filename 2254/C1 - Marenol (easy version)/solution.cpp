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
    int n;
    cin >> n;
    string s1;
    string s2;
    cin >> s1 >> s2;
    int a_even = 0;
    int a_odd = 0;
    int b_even = 0;
    int b_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '1')
        {
            if (i % 2 == 0)
            {
                a_odd++;
            }
            else
            {
                a_even++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s2[i] == '1')
        {
            if (i % 2 == 0)
            {
                b_odd++;
            }
            else
            {
                b_even++;
            }
        }
    }
    if (a_even == b_even && a_odd == b_odd)
    {
        cout << "YES
";
    }
    else
    {
        cout << "NO
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