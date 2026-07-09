#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    ll m;
    cin >> m;
    vector<ll>v;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
            if(i!=(n/i)){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<m){
        cout << -1<<endl;
    }else{
        cout <<v[m-1] << endl;
    }
}