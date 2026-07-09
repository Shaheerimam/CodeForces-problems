#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if(x<4){
            if(x%2==0){
                cout << 2 << endl;
            }else{
                cout << 3 << endl;
            }
            continue;
        }
        else{
            if(x%2==0){
                cout << 0 << endl;
            }else{
                cout << 1 << endl;
            }
        }
    }
    return 0;
}