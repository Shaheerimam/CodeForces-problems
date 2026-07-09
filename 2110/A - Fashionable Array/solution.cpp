#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        vector<int> v(t);
        for (int i = 0; i < t; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        // for (int i = 0; i < t; i++)
        // {
        //     cout<< v[i] <<" ";
        // }
        int m=0;
        int mn=v[m];
        int m2=t-1;
        int mx=v[m2];
        int ans=0;
        int flag=0;
        while (true)
        {
            if((mn+mx)%2==0){
                break;
                
            }else{
                ans++;
                m2--;
                if((mn+v[m2])%2==0){
                    break;
                }
                m++;
                if((mx+v[m])%2==0){
                    break;
                }
                mn=v[m];
                mx=v[m2];
                
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}