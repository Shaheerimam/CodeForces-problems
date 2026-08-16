#include <bits/stdc++.h>
/*
|-------------------|
|Solved by,         |
|.  SHAHEER IMAM.   |
|-------------------|
*/
typedef long long ll;
using namespace std;
void solve(){
    int n;
    cin >> n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        mp[val]=i;
    }
    vector<int> uni;
    for(auto [x,y]:mp){
        uni.push_back(x);
    }
    int mx=-1;
    for(int i=0;i<uni.size();i++){
        for(int j=i;j<uni.size();j++){
            if(__gcd(uni[i],uni[j])==1){
                mx=max(mx,mp[uni[i]]+mp[uni[j]]+2);
            }
        }
    }
    cout << mx << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}