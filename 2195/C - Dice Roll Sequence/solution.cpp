#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
typedef long long ll;
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i:v){
        cin >> i;
    }
    int ans=0;
    for(int i=1;i<n;i++){
        if(v[i]+v[i-1]==7 || v[i]==v[i-1]){
            ans++;
            v[i]=1123;
        }
    }
    cout << ans << endl;
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