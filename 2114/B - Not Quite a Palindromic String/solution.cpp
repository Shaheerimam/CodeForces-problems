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
    ll one=0;
    ll zero=0;
    for(char c:s){
        if(c=='1'){
            one++;
        }else{
            zero++;
        }
    }
    while(k--){
        if(one>zero){
            one-=2;
        }else{
            zero-=2;
        }
    }
    if(one==zero){
        cout << "YES
";
    }else{
        cout << "NO
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