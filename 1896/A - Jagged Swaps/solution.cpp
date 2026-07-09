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
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    vector<int> tmp = v;
    sort(tmp.begin(), tmp.end());
    if (tmp == v)
    {
        cout << "YES" << endl;
        return;
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (v[j] > v[j - 1] && v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
    if(tmp==v){
        cout <<"YES
";
    }else{
        cout <<"NO
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