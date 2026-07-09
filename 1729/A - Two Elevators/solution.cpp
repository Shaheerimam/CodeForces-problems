#include<bits/stdc++.h>
 
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--)
    {
        int x,y,z;
        cin >> x>>y>>z;
        int first=x-1;
        int second;
        if(y>z){
            second=y-1;
 
        }else{
            second=(z-y)*2 +y-1;
        }
        //cout << "first: "<< first << endl << "second:" << second << endl;
        
        if(first<second){
            cout<< 1<< endl;
        }else if(second < first){
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
    }
    
    return 0;
}