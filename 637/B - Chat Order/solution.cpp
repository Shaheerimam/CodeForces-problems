#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <list>
 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> mp;
    deque<string> v;
    int idx = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            mp[s] = idx;
            v.push_back(s);
            
        }
        else
        {
            v[mp[s]]="-1";
            v.push_back(s);
            mp[s]=idx;  
        }
        idx++;
  
    }
    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        if(*i !="-1")cout << *i << endl;
    }
}