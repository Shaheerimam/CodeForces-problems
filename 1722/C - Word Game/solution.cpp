#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <list>
 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string,vector<int>> mp1;
        map<int, int> mp;
        mp[0] = 0;
        mp[1] = 0;
        mp[2] = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                mp1[s].push_back(i);
            }
        }
        // for(auto [x,y]:mp1){
        //     cout << x << "->";
        //     for(int val:y){
        //         cout << val <<" ";
 
        //     }
        //     cout << endl;
        // }
        for(auto [x,y]:mp1){
            int size=y.size();
            if(size==3){
                continue;
            }else if(size==1){
                mp[y[0]]+=3;
                continue;
            }else{
                mp[y[0]]++;
                mp[y[1]]++;
            }
        }
        cout << mp[0] << " " << mp[1] <<" "<< mp[2]<< endl;
    }
}