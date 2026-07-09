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
    int n,x;cin >> n >>x;
    vector<int> v(n+2);
    for(int i=1;i<=n;i++){
        cin >>v[i];
    }
 
    v[0]=0;
    v[n+1]=x+(x-v[n]);
    int ans=0;
    for(int i=1;i<=n+1;i++){
        ans=max(ans,(v[i]-v[i-1]));
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