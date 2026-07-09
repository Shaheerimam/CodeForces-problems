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
map<int, int> mp;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v[i] = val;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 67)
        {
            cout << "YES
";
            return;
        }
        
    }
    cout << "NO
";
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