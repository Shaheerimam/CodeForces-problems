#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include<stack>
 
 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0;
    int r = n - 1;
    long long sum_l = 0, sum_r = 0;
 
    set<long long> s;
    sum_l+=v[0];
    sum_r+=v[n-1];
    s.insert(0);
    while (l < r)
    {
        if (sum_l == sum_r)
        {
            s.insert(sum_l);
            l++;
            sum_l+=v[l];
            r--;
            sum_r+=v[r];
        }else if(sum_l<sum_r){
            l++;
            sum_l+=v[l];
        }else{
            r--;
            sum_r+=v[r];
        }
    }
    cout << *s.rbegin() << endl;
}