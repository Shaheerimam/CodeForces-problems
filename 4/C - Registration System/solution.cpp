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
    cin >> n;
    map<string,int> mp;
    while(n--){
        string s;
        cin >> s;
        if(mp.find(s)==mp.end()){
            mp[s]=1;
            cout << "OK
";
        }else{
            string s2=s + to_string(mp[s]);
            cout << s2 << endl;
            mp[s2]=1;
            mp[s]++;
        }
    }
    // for(auto [x,y]:mp){
    //     cout << x <<"-> " << y << endl;
    // }
}