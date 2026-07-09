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
    int t;
    cin >> t;
    while(t--){
        deque<int> d;
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            int val;
            cin >> val;
            if(d.empty() ||(d[0]>=val)){
                d.push_front(val);
            }else{
                d.push_back(val);
            }
        }
        for(int v:d){
            cout << v <<" ";
        }
        cout << endl;
    }
}