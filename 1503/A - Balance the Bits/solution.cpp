#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
# include <stack>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s1="";
    string s2="";
    int zero=0;
    int one=0;
    for (char ch : s)
    {
        if(ch=='0') zero++;
        else one++;
    }
    int t=0;
    bool flip=true;
    for(char x:s){
        if(x=='1'){
            if(t<one/2){
                s1+='(';
                s2+='(';
            }else{
                s1+=')';
                s2+=')';
            }
            t++;
        }else{
            if(flip){
                s1+=')';
                s2+='(';
            }else{
                s1+='(';
                s2+=')';
            }
            flip=!flip;
        }
    }
    if(s[0]=='1'&&s[n-1]=='1' && zero%2==0){
        cout << "YES
" << s1 <<endl<<s2 <<endl;
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