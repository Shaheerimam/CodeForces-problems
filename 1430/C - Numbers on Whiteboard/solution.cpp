#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
 
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<pair<int,int>> vp;
    while(t--){
        int n;
        cin >> n;
        multiset<int> m1;
        for(int i=1;i<=n;i++){
            m1.insert(i);
        }
        vector<pair<int,int>> mp;
        while(m1.size()!=1){
            
            int x=*m1.rbegin();
            int y=*(++m1.rbegin());
            mp.push_back({x,y});
            m1.erase(x);
            m1.erase(y);
            double d=(double)(x+y)/2;
            m1.insert(ceil(d));
        }
        cout<< *m1.begin()<<endl;
        for(auto [a,b]:mp){
            cout << a <<" "<<b<< endl;
        }
       
        
    }
}