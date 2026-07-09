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
    if (n%2!=0){
        cout << "NO
";
    }else{
        cout <<"YES
";
        bool flag=true;
        for(int i=0;i<n/2;i++){
            if (flag){
                cout << "AA";
                flag=false;
            }else{
                cout <<"BB";
                flag=true;
            }
            
        }
        cout << endl;
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