#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
 
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
        map<int,int> mp;
        for(int i=1;i<=n;i++){
            int val;
            cin >> val;
            mp[val]++;
        }
        priority_queue<int> pq;
        for(auto x:mp){
            pq.push(x.second);
        }
        while(!pq.empty()){
            if(pq.size()<2){
                break;
            }
            int a =pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            a--;
            b--;
            if(a>0){
                pq.push(a);
            }
            if(b>0){
                pq.push(b);
            }
            
        }
        int ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        cout << ans <<endl;
    }
}