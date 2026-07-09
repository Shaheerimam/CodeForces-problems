#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
map<int,int>mp;
void pre_cal(){
    for(int i=0;i<1e6 ;i++){
        if(i%2==0){
            mp[i]=2;
        }else{
            mp[i]=1;
        }
    }
}
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int l=0;
    int r=1;
    
    bool flag=true;
    while(r<n && l<n){
        
        if(mp[v[l]]==mp[v[r]]){
            flag=false;
            cout << "NO
";
            break;
        }
        r++;
        l++;
    };
    if(flag){
        cout << "YES
";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    pre_cal();
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}