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
        int n;
        cin >> n;
        map<int,int> mp;
        vector<int> idx;
        for(int i=0;i<n;i++){
            int val;
            cin >> val;
            if(mp.find(val)==mp.end()){
                mp[val]=i;
            }else{
                idx.push_back(mp[val]);
                mp[val]=i;
                
            }
        }
        if(idx.empty()){
            cout << 0 << endl;
            continue;
        }
        sort(idx.begin(),idx.end(),greater<int>());
        cout << idx[0]+1 << endl;
    }
}