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
        int n;
        cin >>n;
        string s;
        cin >> s;
 
        int r=n-1;
        int l=0;
        while(l<r){
            if(s[l]==s[r]){
                break;
            }
            l++;
            r--;
            n-=2;
        }
        cout << n << endl;
    }
}