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
        int n;
        cin >> n;
        vector<int> v(n);
 
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v[i] = val;
        }
        int m;
        cin >> m;
        
        while (m--)
        {
            string s;
            cin >> s;
            bool flag = true;
            if (s.size() != v.size())
            {
                cout << "NO
";
                continue;
            }
            map<char, int> m1;
            set<int> s1;
            for (int i = 0; i < s.size(); i++)
            {
                if(m1.find(s[i])==m1.end() && s1.find(v[i])==s1.end()){
                    m1[s[i]]=v[i];
                    s1.insert(v[i]);
                    continue;
                }
                if(m1.find(s[i]) == m1.end() || m1[s[i]] != v[i]){
                    flag=false;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES
";
            }
            else
            {
                cout << "NO
";
            }
        }
    }
}