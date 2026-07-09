#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='A'){
            a++;
        }
    }
    int d=n-a;
    a==d? cout << "Friendship
":
    a>d? cout << "Anton
": cout <<"Danik
";
    
    return 0;
}