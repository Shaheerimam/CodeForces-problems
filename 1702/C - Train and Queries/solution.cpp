#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >>m;
        map<int,set<int>> mp;
        for(int i=1;i<=n;i++){
            int val;
            cin >> val;
            mp[val].insert(i);
        }
        while(m--){
            int a,b;
            cin >> a >> b;
            if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end()){
                if(*mp[a].begin()<*mp[b].rbegin()){
                    cout << "YES
";
                }else{
                    cout <<"NO
";
                }
            }else{
                cout << "NO
";
            }
            
        }
    }
}