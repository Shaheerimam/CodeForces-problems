#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        deque<int> lower_pos;
        deque<int> uper_pos;
        deque<int> res;
        string s;
        cin >> s;
        int idx=0;
        for(char c : s){
            if(c=='b' || c=='B'){
                s[idx]='#';
            }
            if(c=='B'&& !uper_pos.empty()){
                s[uper_pos.back()]='#';
                
                uper_pos.pop_back();
            }else if(c=='b' && !lower_pos.empty()){
                s[lower_pos.back()]='#';
                
                lower_pos.pop_back();
            }else if(c>='a' && c<='z'){
                lower_pos.push_back(idx);
            }else if(c>='A' && c<='Z'){
                uper_pos.push_back(idx);
            }
            idx++;
            
        }
        for(char c: s){
            if(c!='#'){
                cout << c;
            }
        }
        cout << endl;
    }
    
}