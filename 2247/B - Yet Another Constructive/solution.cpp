#include <bits/stdc++.h>
/*
|-------------------|
|Solved by,         |
|.  SHAHEER IMAM.   |
|-------------------|
*/
typedef long long ll;
using namespace std;
void solve()
{
    int n, k, m;
    cin >> n >> k >> m;
    vector<ll> v;
    if (k <= m)
    {
        cout << "YES
";
        for(int i=0;i<n;i++){
            if((i+1)%k==0){
                v.push_back(m-k+1);
            }else{
                v.push_back(1);
            }
        }
        for(ll g:v){
            cout <<g <<" ";
        }
        cout <<endl;
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