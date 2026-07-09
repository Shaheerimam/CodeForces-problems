#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
void solve(){
    int n;
    cin >> n;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        int val;
        cin >>val;
        mx=max(val,mx);
    }
    cout << mx*n << endl;
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