#include <iostream>
#include <vector>
#include <algorithm>
 
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    map<int,int> mp; //value,count
    for(int i=0;i<m;i++){
        int val;
        cin >> val;
        mp[val]++;
    }
    string s2;
    cin >> s2;
    sort(s2.begin(),s2.end());
    while(!mp.empty()){
        int index=mp.begin()->first;
        int count=mp.begin()->second;
        index--;
        if(count>1){
            s[index]=*s2.rbegin();
            s2.erase(--s2.end());
            mp.begin()->second--;
        }else{
            s[index]=*s2.begin();
            s2.erase(s2.begin());
            mp.erase(mp.begin());
        }
    }
    cout << s << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    
 
}