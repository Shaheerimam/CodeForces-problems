#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    string s = "aeiou";
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        string s2;
        if (m <= 5)
        {
            s2 = s.substr(0, m);
        }
        else
        {
            int x = m / 5;
            int y = m - (x * 5);
            for (char c : s)
            {
                if (y != 0)
                {
                    string s3(x + 1, c);
                    y--;
                    s2 += s3;
                }
                else
                {
                    string s3(x, c);
                    s2 += s3;
                }
            }
        }
        cout << s2 << endl;
    }
 
    return 0;
}