#include <bits/stdc++.h>
using namespace std;
typedef long long           ll;
typedef pair<int,int>       pii;
#define pb                  push_back
#define ppb                 pop_back
#define MP                  make_pair
#define ff                  first
#define ss                  second
#define all(c)              c.begin(), c.end()
 
 
void test_case() {
    ll n;
    cin >> n;
    ll tm[n + 1], a[n + 1], b[n + 1];
    tm[0] = a[0] = b[0] = 0;
    for(ll i = 1; i <= n; i++) cin >> a[i] >> b[i];
    for(ll i = 1; i <= n; i++) cin >> tm[i];
    ll cur = 0;
    for(ll i = 1; i <= n; i++) {
        cur += (a[i] - b[i - 1] + tm[i]);
        if(i == n) break;
        ll v = (b[i] - a[i]) / 2 + (b[i] - a[i]) % 2;
        cur = max(cur + v, b[i]);
    }
    cout << cur << endl;
}
 
int main()
{
    #ifdef NST        
    clock_t tStart = clock();
    freopen("/IO/input.txt", "r", stdin);         
    freopen("/IO/output.txt", "w", stdout);     
    #endif
 
    int t = 1;
    cin >> t;
    while(t--) {
        test_case();
    }
 
    #ifdef NST        
    fprintf(stderr, "
>> Runtime: %.10fs
", (double) (clock() - tStart) / CLOCKS_PER_SEC);     
    #endif
    return 0; 
}