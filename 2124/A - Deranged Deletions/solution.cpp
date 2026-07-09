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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    vector<int> tmp = v;
    sort(tmp.begin(), tmp.end());
    auto l = v.begin();
    int j = 0;
    while (l != v.end())
    {
        // for (int g : tmp)
        // {
        //     cout << g << " ";
        // }
        // cout << endl;
        if (*l == tmp[j])
        {
            v.erase(l);
            l--;
        }
        j++;
        l++;
    }
    // for (int g : v)
    //     {
    //         cout << g << " ";
    //     }
    //     cout << endl;
    if (v.size() == 0)
    {
        cout << "NO
";
    }
    else
    {
        cout << "YES
"<<v.size() << endl;
        for (int g : v)
        {
            cout << g << " ";
        }
        cout << endl;
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