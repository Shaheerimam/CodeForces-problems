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
    string s;
    cin >> s;
    string s2(n, '0');
    for (int i = 0; i < n - k; i++)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
            if (s[i + k] == '0')
            {
                s[i + k] = '1';
            }else{
                s[i+k]='0';
            }
        }
    }
    if(s==s2){
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