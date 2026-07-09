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
    priority_queue<int,vector<int>,greater<int>> p_q;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        p_q.push(val);
    }
    int x=1;
    int ans=0;
    while(!p_q.empty()){
        //cout << p_q.top() << " ";
        if(p_q.top()>=x){
            ans++;
            x++;
        }
        
        p_q.pop();
    }
    cout << endl<<ans << endl;
}