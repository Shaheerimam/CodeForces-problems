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
    int n;
    cin >> n;
    deque<int> v(n);
    int sira = 0, dima = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = false;
    int a=0;
    int b=n-1;
    while (a<=b)
    {
  
        int max_index;
        if(v[a]>=v[b]){
            max_index=a;
            a++;
        }else{
            max_index=b;
            b--;
        }
        
        if(!flag){
            sira+=v[max_index];
            flag=true;
        }else{
            dima+=v[max_index];
            flag=false;
        }
        
 
    }
    // cout << *mx <<endl;
    cout << sira << " " << dima;
}