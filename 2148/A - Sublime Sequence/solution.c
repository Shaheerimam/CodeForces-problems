#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d
", y%2==0? 0 : x);
    }
    
    return 0;
}