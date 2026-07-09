#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int a,b,c;
        cin >> a >> b >>c;
        int d=b-a;
        c=c-d;
        if(c<b){
            cout << "NO
";
            continue;
        }
        int e=(c-b);
        if(e%3==0 || (a==b && b==c)){
            cout << "YES
";
 
        }else{
            cout << "NO
";
        }
    }
    return 0;
}