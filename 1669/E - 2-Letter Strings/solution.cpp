#include <iostream>
#include <vector>
#include <algorithm>
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
        int q;
        cin >> q;
        vector<string> v(q);
        map<string, int> fre;
        for (int i = 0; i < q; i++)
        {
            string s;
            cin >> s;
            fre[s]++;
            v[i] = s;
        }
        long long ans = 0;
        for (int i = 0; i < q; i++)
        {
            fre[v[i]]--;
            string a = v[i];
            string b = v[i];
            for (char c = 'a'; c <= 'k'; c++)
            {
                a[0]=c;
                b[1]=c;
                if(a!=v[i]){
                    ans+=fre[a];
                }
                if(b!=v[i]){
                    ans+=fre[b];
                }
            }
        }
        cout << ans << endl;
    }
}