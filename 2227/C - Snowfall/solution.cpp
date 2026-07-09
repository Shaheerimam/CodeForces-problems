#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        if(val%6==0){
            v1.push_back(val);
        }else if(val %2==0 && val%3!=0){
            v2.push_back(val);
        }else if(val%3==0){
            v3.push_back(val);
        }else{
            v4.push_back(val);
        }
    }
    vector<int> ans;
    for(int c:v1){
        ans.push_back(c);
    }
    for(int c:v2){
        ans.push_back(c);
    }
    for(int c:v4){
        ans.push_back(c);
    }
    for(int c:v3){
        ans.push_back(c);
    }
    for(int c:ans){
        cout << c <<" ";
    }
     cout << endl;
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}