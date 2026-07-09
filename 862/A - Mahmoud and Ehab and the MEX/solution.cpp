#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int count=0;
    vector<bool> arr(101,false);
    //memset(arr,false,sizeof(arr));
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        arr[val]=true;
        if(val==m){
            count++;
        }
    }
    if(!arr[m]){
        arr[m]=true;
    }
    for(int i=0;i<=m;i++){
        if(!arr[i]){
            count++;
        }
    }
 
 
    cout << count << endl;
}