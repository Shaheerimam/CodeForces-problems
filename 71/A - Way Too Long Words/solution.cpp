#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int siz =s.size();
        if(siz<=10){
            cout << s << endl;
            
        }else{
            cout << s.front() << siz - 2 <<s.back() << endl;
        }
    }
    
    return 0;
}