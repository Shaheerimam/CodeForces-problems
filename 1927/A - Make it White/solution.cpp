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
        int n;
        cin >> n;
        deque<char> s;
        string s2;
        cin >> s2;
        for(char c: s2){
            s.push_back(c);
        }
        bool flag1=false,flag2=false;
        while(!s.empty()){
            if(flag1 && flag2){
                break;
            }
            char a= s.front();
            char b=s.back();
            if(a=='W'){
                s.pop_front();
            }else{
                flag1=true;
            }
            if(b=='W'){
                s.pop_back();
            }else{
                flag2=true;
            }
        }
        cout << s.size() <<endl;
        
 
    }
}