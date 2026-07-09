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
void solve(){
    int n;
    cin >> n;
    vector<long long>v(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        v[i]>0?sum+=v[i]:NULL;
    }
    int l=0;
    int r=0;
    int attemp=0;
    //cout << sum<<endl;
    while(r<n){
        if(v[l]<0){
            long long sum2=0;
            while(v[r]<=0 && r<n){
                sum2+=-(v[r]);
                r++;
            }
            attemp++;
            l=r;
            sum+=sum2;
        }
        l++;
        r++;
    }
    cout <<sum <<" "<<attemp<< endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}