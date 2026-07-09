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
        long long a,b;
        cin >> a >>b;
        bool flag=true;
        long long val=a*2;
        while(val<b){
            //cout << val << " ";
            if(b%val!=0){
                cout << "YES
";
                flag=false;
                break;
            }
            val=val+a;
        }
        if(flag){cout <<"NO
";}
    }
}