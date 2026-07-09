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
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    vector<int> v_pre(n + 1);
    v_pre[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> v[i];
        v_pre[i] = v_pre[i - 1] + v[i];
    }
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum=(b-a+1);
        int sum2=sum*c;
        int sum3=v_pre[b]-v_pre[b-sum];
        int final=v_pre[n]-sum3;
        final+=sum2;
        if(final%2==0){
            cout << "NO
";
        }else{
            cout << "YES
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