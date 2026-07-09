#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int y = x;
        vector<int> arr(y);
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        int op = 0;
        for (auto i = arr.end() - 2; i >= arr.begin(); i--)
        {
            if (*i > *(i + 1))
            {
                arr.erase(i + 1);
                op++;
                if (i+1 != arr.end())
                {
                    i++;
                }
            }
        }
        cout << op << endl;
        // for (auto i = arr.end() -1; i >= arr.begin(); i--)
        // {
        //     cout << *i << endl;
        // }
    }
 
    return 0;
}