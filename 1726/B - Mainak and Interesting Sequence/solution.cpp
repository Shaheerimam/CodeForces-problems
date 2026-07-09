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
    if (n > k)
    {
        cout << "No
";
    }
    else if (n % 2 != 0)
    {
        cout << "Yes
";
        vector<int> v(n, 1);
        v.back() += k - n;
        for (int h : v)
        {
            cout << h << " ";
        }
        cout << endl;
    }
    else
    {
        if (k % 2 == 0)
        {
            cout << "Yes
";
            vector<int> v(n, 1);
            v[0] += (k - n)/2;
            v[1] += (k - n)/2;
            for (int h : v)
            {
                cout << h << " ";
            }
            cout << endl;
        }else{
            cout <<"No
";
        }
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