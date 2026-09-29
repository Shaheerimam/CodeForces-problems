#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
    long long a,b,c,z=0;
    long long rem=0;
    long long ans=0,res=0;
    cin>>a>>b>>c;
    for(long long i=0; i<=n/a; i++)
    {
        for(long long j=0; j<=n/b; j++)
        {
 
            rem= n- i*a - j*b ;
            if(rem>=0)
            {
                if(rem%c==0)
                {
                    z=rem/c;
                    ans=i+j+z;
                    res=max(ans,res);
                }
            }
 
 
 
        }
 
    }
    cout<<res;
}