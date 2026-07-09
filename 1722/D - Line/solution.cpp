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
        cin >> s;
        deque<int> left;
        deque<int> right;
        vector<int> res(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L' && i < (n / 2))
            {
                left.push_back(i);
            }
            else if (s[i] == 'R' && i >= (n / 2))
            {
                right.push_back(i);
            }
            if (s[i] == 'L')
            {
                sum += i;
                res[i] = i;
            }
            else
            {
                sum = sum + (n - i - 1);
                res[i] = (n - i - 1);
            }
        }
        sort(left.begin(), left.end(), greater<int>());
        // for(int k:res){
        //     cout << k <<" ";
        // }
        // cout << endl <<sum << endl;
        // for(int k:left){
        //     cout << k<<" ";
        // }
        // cout << endl;
        // for(int k:right){
        //     cout << k<<" ";
        // }
        // cout << endl;
        for (int i = 0; i < n; i++)
        {
          
            if (!left.empty() && !right.empty())
            {
                int l = left.back();
                int r = right.back();
 
                if (res[l] < res[r])
                {
                    left.pop_back();
                    
                    sum= sum - res[l] + (n - l - 1);
                }
                else
                {
                    right.pop_back();
                    sum = sum - res[r] + (r);
                }
            }
            else if (!left.empty())
            {
                int l = left.back();
                left.pop_back();
                
                sum= sum - res[l] + (n - l - 1);
            }
            else if(!right.empty())
            {
                int r = right.back();
                right.pop_back();
                sum = sum - res[r] + (r);
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}