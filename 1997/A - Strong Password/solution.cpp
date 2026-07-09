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
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        bool flag=true;
        char prev=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]==prev){
                s[i]=='z'?s.insert(s.begin()+i,'a'):s.insert(s.begin()+i,'z');
                flag=false;
                break;
            }
            prev=s[i];
        }
        if(flag){
            s[0]=='a'?s.insert(s.begin(),'z'):s.insert(s.begin(),'a');
        }
        cout << s << endl;
    }
}