#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    while(m--){
        int n,s,x;
        cin >> n >> s >> x;
        vector<int> v;
        int val;
        int sum = 0;
        for(int i=0;i<n;i++){
            cin >> val;
            v.push_back(val);
            sum += val;
        }
        int flag =0;
        if(sum==s){
            flag = 1;
        }
        while(sum < s){
            sum += x;
            if(sum==s){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}