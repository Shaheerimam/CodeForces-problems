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
bool isPrime(ll n)
{
    if(n<2){
        return false;
    }
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
// bool bug(ll n){
//     ll remain=1;
//     while(n-- && n>remain){
//         if(isPrime(n) && isPrime(remain)){
//             cout << n <<"-"<<remain << endl;
//             return true;
//         }
//         remain++;
//     }
//     return false;
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    if (isPrime(n))
    {
        cout << 1 << endl;
        return 0;
    }else if(n%2==0 || isPrime(n-2)){
        cout << 2 << endl;
        return 0;
    }else{
        cout << 3 << endl;
    }
    
}