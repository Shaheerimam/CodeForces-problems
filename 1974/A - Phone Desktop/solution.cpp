#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        float x,y;
        cin >> x >> y;
        
        int t=ceil(y/2);
        int sum2=t*15;
        sum2=sum2-4*y;
        if(sum2<x){
            float w=x-sum2;
            t=t+ceil(w/15);
        }
        cout << t << endl;
        
    }
    return 0;
}