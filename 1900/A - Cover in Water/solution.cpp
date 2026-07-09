#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >>m;
        string s;
        cin >> s;
        int ans=0;
        for(int i=0;i<m;i++){
            if(s[i]=='.'){
                ans++;
                if(ans==3){
                    break;
                }
            }else{
                ans=0;
            }
        }
        if(ans!=3){
            cout << count(s.begin(),s.end(),'.')<< endl;
            
        }else{
            cout << 2 << endl;
        }
    }
    
    return 0;
}