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
        int n;
        cin >> n;
        string s;
        map<char,int> mp;
        map<char,char> mp2;
        vector<char> v;
        cin >> s;
        for(int i=0; i<s.size();i++){
            if(mp2.find(s[i])==mp2.end()){
                mp2[s[i]]=s[i];
                v.push_back(s[i]);
            }
            
        }
        sort(v.begin(),v.end());
        int i=0;
        int j=v.size()-1;
        while(i<j){
            mp2[v[i]]=v[j];
            mp2[v[j]]=v[i];
            i++;
            j--;
        }
        
        for(int i=0; i<s.size();i++){
            s[i]=mp2[s[i]];
            
        }
        cout << s << endl;
    }
}