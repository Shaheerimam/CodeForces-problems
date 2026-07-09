#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    while(n--){
        int l;
        cin >> l;
        string s;
        cin >> s;
        int c=count(s.begin(),s.end(),'1');
        int ans=0;
        for(auto ch:s){
            if(ch=='1'){
                ans=ans+c-1;
            }else{
                ans=ans+c+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}