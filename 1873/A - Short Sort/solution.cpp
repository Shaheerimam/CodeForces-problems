#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "abc")
        {
            cout << "YES
";
            continue;
        }
        if (s[0] == 'a')
        {
            swap(s[1], s[2]);
            if (s == "abc")
            {
                cout << "YES
";
                continue;
            }
            cout << "NO
";
        }
        if (s[0] != 'a')
        {
            if (s[1] == 'a')
            {
                swap(s[1], s[0]);
                if (s == "abc")
                {
                    cout << "YES
";
                    continue;
 
                }
            }
            if (s[2] == 'a')
            {
                swap(s[2], s[0]);
                if (s == "abc")
                {
                    cout << "YES
";
                    continue;
                }
            }
            cout << "NO
";
        }
    }
    return 0;
}