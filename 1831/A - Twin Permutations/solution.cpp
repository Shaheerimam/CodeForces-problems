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
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        vector<int> arr(m);
        for(int i=0;i<m;i++){
            cin >> arr[i];
        }
        int mx=m+1;
        for(int i=0;i<m;i++){
            cout << mx-(arr[i])<< " ";
        }
        cout << endl;
    }
}