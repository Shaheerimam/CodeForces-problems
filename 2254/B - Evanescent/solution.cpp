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
    string s;
    cin >> s;
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            len++;
        }
    }
    bool flag=false;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] != s[i] && s[i] != s[i + 1])
        {
            if (s[i - 1] == s[i + 1])
            {
                cout << len - 2 << endl;
                return;
            }else{
                flag=true;
            }
        }
    }
    if (flag)
    {
        cout << len - 1 << endl;
    }
    else
    {
        cout << len << endl;
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