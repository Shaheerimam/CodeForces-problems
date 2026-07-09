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
    int x,y;
    cin >> x >> y;
    int x1=0;
    int y1=0;
    while(x1<x-1){
        x1+=2;
    }
    while(y1<y-1){
        y1+=2;
    }
    if(x1==x || y1==y){
        cout << "YES
";
    }else{
        cout << "NO
";
    }
    
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