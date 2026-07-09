#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int arr[n];
        int count_1=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==1){
                count_1++;
            }
        }
        int d=count_1/2;
        n=n-(2*d);
        cout << n+d << endl;
 
    }
}