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
    int t;
    cin >> t;
    while(t--){
        int n,m,q;
        cin >> n >>m >>q;
        vector<int> teachers;
        for(int i=0;i<m;i++){
            int val;
            cin>>val;
            teachers.push_back(val);
        }
        sort(teachers.begin(),teachers.end());
        
        while(q--){
            int val;
            cin>>val;
            auto it=upper_bound(teachers.begin(),teachers.end(),val);
            if(it==teachers.end()){
                cout << n-*(--it) << endl;
            }
            else if(it==teachers.begin()){
                cout << *it-1 << endl;
            }else{
                int right=*it--;
                int left=*it;
                int dis=right-left-1;
                cout << (dis+1)/2 << endl;
            }
 
        }
    }
}