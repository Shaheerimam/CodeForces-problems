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
    int n;cin >> n;
    map<int,int> v;
    for(int i=0;i<n;i++){
        int val;
        cin >>  val;
        v[val]++;
    }
    cout << v.rbegin()->second << endl;
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