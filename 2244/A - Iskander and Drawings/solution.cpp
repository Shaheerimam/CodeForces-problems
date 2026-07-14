#include <bits/stdc++.h>
/*
|-------------------|
|Solved by,         |
|.  SHAHEER IMAM.   |
|-------------------|
*/
typedef long long ll;
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    double lenth=0;
    double x=0;
    for(char c:s){
        if(c=='*'){
            x=0;
        }else{
            x++;
            lenth=max(lenth,x);
        }
    }
    
    cout << ceil(lenth/2) << endl;
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