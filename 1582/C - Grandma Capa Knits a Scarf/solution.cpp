#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <queue>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mn=2e5;
    for (char c = 'a'; c <= 'z'; c++)
    {
        int l = 0;
        int r = n - 1;
        int del=0;
        bool flag=true;
        while(l<r){
            if(s[l]!=s[r]){
                if(s[l]==c){
                    del++;
                    l++;
                }else if(s[r]==c){
                    del++;
                    r--;
                }else{
                    flag=false;
                    break;
                }
            }else{
                r--;
                l++;
            }
        }
        flag?mn=min(mn,del):NULL;
    }
    if(mn==2e5){
        cout <<-1 << endl;
    }else{
        cout << mn << endl;
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