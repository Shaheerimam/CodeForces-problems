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
    int n;
    cin >>n;
    int count=0;
    map<pair<string,string>,bool> mp;
    while(n--){
       string spcs,color;
       cin >> spcs >> color;
  
       mp[{spcs,color}]=true;
    }
    cout << mp.size() <<endl;
}