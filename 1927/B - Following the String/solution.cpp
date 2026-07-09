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
    vector<int> v(n);
    map<int,queue<int>> mp;
    for(int i=0;i<n;i++){
        int val;cin >> val;
        v[i]=val;
    }
    string ans="";
    char ch='a';
    for(int x:v){
        if(x==0){
            ans+=ch;
            mp[x].push(ch);
            ch++;
        }else{
            char c=mp[x-1].front();
            ans+=c;
            mp[x-1].pop();
            mp[x].push(c);
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