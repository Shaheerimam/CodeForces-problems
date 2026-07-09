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
    vector<int> v(n - 1);
    for (auto &i : v)
    {
        cin >> i;
    }
    vector<int> v2;
    v2.push_back(v[0]);
    for (int i = 0; i < n - 1; i++)
    {
        v2.back() = v2.back() | v[i];
        v2.push_back(v[i]);
    }
    bool flag = true;
    for (int i = 0; i < n-1; i++)
    {
        if (v[i]!=(v2[i]&v2[i+1]))
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        for (int g : v2)
        {
            cout << g << " ";
        }
    }else{
        cout <<-1;
    }
 
    cout << endl;
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