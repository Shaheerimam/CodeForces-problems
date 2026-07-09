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
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
 
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        bool flag=true;
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]){
                cout <<1 << endl;
                flag=false;
                break;
            }
        }
        if(flag){
            cout << n << endl;
        }
    }
}