#include <iostream>
#include <vector>
#include <algorithm>
 
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<pair<int,int>> m1;
    multiset<pair<int,int>> m2;
    int serial=1;
    for(int i=1;i<=n;i++){
        int type;
        cin >> type;
        if(type==1){
            int money;
            cin >> money;
            m1.insert({serial,money});
            m2.insert({money,-(serial)});
            serial++;
        }else if(type==2){
            pair<int,int> p=make_pair(m1.begin()->first,m1.begin()->second);
            cout << p.first << " ";
            m1.erase(m1.begin());
            m2.erase({p.second,-p.first});
        }else{
            pair<int,int> p=make_pair((m2.rbegin())->first,(m2.rbegin())->second);
            cout << -p.second << " ";
            m1.erase({-p.second,p.first});
            m2.erase(--m2.end());
            
        }
        
    }
    
}