#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> current_set;
        current_set.insert(v[0]);
        set<int> next_set;
        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (current_set.find(v[i]) == current_set.end())
            {
                next_set.insert(v[i]);
                continue;
            }
 
            if (current_set.find(v[i]) != current_set.end())
            {
                next_set.insert(v[i]);
                current_set.erase(v[i]);
            }
            if (current_set.empty())
            {
                ans++;
                current_set = next_set;
                next_set.clear();
                continue;
            }
        }
        cout << ans << endl;
    }
}