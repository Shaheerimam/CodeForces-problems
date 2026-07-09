#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    while(n--){
        int x,m;
        cin >> x >> m;
        string s;
        cin>> s;
        int sum=0;
        for (char i = 'A'; i < 'H'; i++)
        {
            int d=count(s.begin(),s.end(),i);
            if(d<m){
                sum+=(m-d);
            }
        }
        cout << sum << endl;
 
    }
    return 0;
}