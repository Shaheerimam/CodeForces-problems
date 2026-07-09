#include <iostream>
#include <vector>
#include <algorithm>
 
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
        vector<int> v(n);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v[i]=val;
            s.insert(val);
        }
        int a = 0;
        int b = n-1;
        bool flag=false;
        while (a < b)
        {
            int mn = *s.begin();
            int mx = *s.rbegin();
           // cout << mn <<" -- "<< mx << endl;
            //cout << v[a] <<"**" <<v[b] << endl;
            if((v[a]!=mn &&v[a]!=mx) &&(v[b]!=mn&&v[b]!=mx)){
                
                cout << a+1 <<" "<<b+1 <<endl;
                flag=true;
                break;
            }else if(v[a]==mn || v[a]==mx){
                s.erase(v[a]);
                a++;
                
            }else if(v[b]==mn || v[b]==mx){
                s.erase(v[b]);
                b--;
            }else{
                s.erase(v[b]);
                s.erase(v[a]);
                a++;
                b--;
            }
        }
        if(!flag){
            cout << -1 << endl;
        }
    }
}