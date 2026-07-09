#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <queue>
#include <stack>
 
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    stack<char> st;
    auto a = s.begin();
    auto b = ++s.begin();
    while (b != s.end())
    {
        if (*a == *b)
        {
            if (!st.empty())
            {
                st.pop();
            }
            *a = '*';
            *b = '*';
        }
        else if (*a == '*' && *b != '*')
        {
 
            if (st.empty())
            {
                st.push(*b);
            }
            else
            {
 
                if (st.top() == *b)
                {
                    *b = '*';
                    st.pop();
                }
                else
                {
                    st.push(*b);
                }
            }
        }
        else
        {
            if (st.empty())
            {
                st.push(*a);
                
            }
            st.push(*b);
        }
        a++;
        b++;
    }
   //cout << st.size();
    if(st.size()==0 && s.size()!=1){
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}