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
    int n,x;
    cin >> n >> x;
    vector<int> v(n+1);
    vector<int> d_ele(n+1);
 
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    int idx=n;
    set<int> u;
    for(auto i=v.rbegin();i<v.rend()-1;i++){
        u.insert(*i);
        d_ele[idx--]=u.size();
    }
 
    while(x--){
        int w;
        cin >> w;
        cout << d_ele[w] << endl;
    }
}