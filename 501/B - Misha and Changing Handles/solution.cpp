#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, string> mp;
    map <string,string> mp2;
 
    while(n--){
        string s1, s2;
        cin >> s1 >> s2;
        auto it_s1=mp2.find(s1);
        if(it_s1==mp2.end()){
            mp[s1]=s2;
            mp2[s2]=s1;
        }
        //auto it_s1=mp.find(s1);
        
        else{
            string origin=it_s1->second;
            mp[origin]=s2;
            mp2[s2]=origin;
        }
    }
    cout << mp.size() << endl;
    for(auto g:mp){
        cout << g.first << " " << g.second << endl; 
    }
}