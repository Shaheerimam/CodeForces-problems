#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int len,ballons=0;
        cin >> len;
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        //cout << s<< endl;
        char recent=s[0];
        ballons++;
        for(char c : s){
            ballons++;
            if(c!=recent){
                ballons++;
                recent=c;
            }
        }
        cout << ballons << endl;
 
    }
    return 0;
}