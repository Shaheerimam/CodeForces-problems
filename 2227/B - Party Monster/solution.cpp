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
    string s;
    cin >> n >>s;
    int a=0;
    int b=0;
    for(char c:s){
        if(c=='('){
            a++;
        }else{
            b++;
        }
    }
    if(a==b){
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