#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v[val]++;
    }
    if (v.size() == 2)
    {
        
        if (n==3)
        {
            cout << "Yes
";
        }else if(v.begin()->second==v.rbegin()->second || v.begin()->second+1==v.rbegin()->second || v.begin()->second==v.rbegin()->second+1){
            cout << "Yes
";
        }
        else
        {
            cout << "No
";
        }
    }
    else if (v.size() == 1)
    {
        cout << "Yes
";
    }
    else
    {
        cout << "No
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