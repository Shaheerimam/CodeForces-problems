#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    bool flag = true;
    bool flag2 = false;
  
    for (int i = 0; i < n; i++)
    {
        //cout << a[i] << " ";
        if(c[i]!=b[i] && a[i]!=c[i]){
            flag=false;
            cout << "YES
";
            return;
            break;
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